// Generated from svdf_bias_present.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::svdf_bias_present {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::svdf_bias_present

namespace android::hardware::neuralnetworks::V1_0::generated_tests::svdf_bias_present {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, svdf_bias_present) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::svdf_bias_present::get_examples());
}

TEST_F(ValidationTest, svdf_bias_present) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::svdf_bias_present::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::svdf_bias_present
