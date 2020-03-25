#include "iotjs_def.h"

#include "jerryscript-core.h"
#include "stdlib.h"

JS_FUNCTION(print_output)
{
    jerry_size_t size = jerry_get_utf8_string_size(jargv[0]);
    char* str         = (char*)malloc(size + 1);
    if (str == NULL) {
        printf("out of memory\n");
        return jerry_create_number(-1);
    }

    jerry_string_to_utf8_char_buffer(jargv[0], (jerry_char_t*)str, size);
    str[size] = '\0';

    printf("%s", str);

    free(str);

    return jerry_create_number(0);
}

jerry_value_t InitPrintNativeModule()
{
    jerry_value_t print_module = jerry_create_object();
    iotjs_jval_set_property_string_raw(
            print_module, "module-name", "print");

    iotjs_jval_set_method(print_module, "output", print_output);

    return print_module;
}
