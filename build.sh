#!/bin/bash

source config.env

${IOTJS_ROOT}/tools/build.py --external-modules=${CWD} --cmake-param=-DENABLE_MODULE_PRINT=ON --cmake-param=-DMEM_HEAP_SIZE_KB=4096

# ${IOTJS_ROOT}/tools/build.py --external-modules=${CWD} --profile=${CWD}/print.profile --cmake-param=-DMEM_HEAP_SIZE_KB=4096
