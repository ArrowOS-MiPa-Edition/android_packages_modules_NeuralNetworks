// Generated from avg_pool_quant8_5.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::avg_pool_quant8_5 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::avg_pool_quant8_5

namespace android::hardware::neuralnetworks::V1_1::generated_tests::avg_pool_quant8_5 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, avg_pool_quant8_5) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::avg_pool_quant8_5::get_examples());
}

TEST_F(ValidationTest, avg_pool_quant8_5) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::avg_pool_quant8_5::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_1::generated_tests::avg_pool_quant8_5
