// Generated from add_int32.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::add_int32 {

const TestModel& get_test_model() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({1, 2}),
                .dimensions = {1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({3, 4}),
                .dimensions = {1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({4, 6}),
                .dimensions = {1, 2},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1, 2},
                .outputs = {3},
                .type = TestOperationType::ADD
            }},
        .outputIndexes = {3}
    };
    return model;
}

const auto dummy_test_model = TestModelManager::get().add("add_int32", get_test_model());

}  // namespace generated_tests::add_int32

