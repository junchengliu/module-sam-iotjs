var PrintModule = /** @class */ (function () {
    function PrintModule(nativeObj) {
        this.nativeObj = nativeObj;
    };

    PrintModule.create = function () {
        return new PrintModule(PrintModule_create());
    };

    PrintModule.prototype.output = function (message) {
        return PrintModule_output(this.nativeObj, message);
    };

    return PrintModule;
}());