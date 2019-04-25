// clang-format off
// Generated file (from: pad_v2_all_dims.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace pad_v2_all_dims {
// Generated pad_v2_all_dims test
#include "generated/examples/pad_v2_all_dims.example.cpp"
// Generated model constructor
#include "generated/models/pad_v2_all_dims.model.cpp"
} // namespace pad_v2_all_dims

TEST_F(GeneratedTests, pad_v2_all_dims) {
    execute(pad_v2_all_dims::CreateModel,
            pad_v2_all_dims::is_ignored,
            pad_v2_all_dims::get_examples());
}

TEST_F(GeneratedTests, pad_v2_all_dims_float16) {
    execute(pad_v2_all_dims::CreateModel_float16,
            pad_v2_all_dims::is_ignored_float16,
            pad_v2_all_dims::get_examples_float16());
}

TEST_F(DynamicOutputShapeTest, pad_v2_all_dims_dynamic_output_shape) {
    execute(pad_v2_all_dims::CreateModel_dynamic_output_shape,
            pad_v2_all_dims::is_ignored_dynamic_output_shape,
            pad_v2_all_dims::get_examples_dynamic_output_shape());
}

TEST_F(DynamicOutputShapeTest, pad_v2_all_dims_dynamic_output_shape_float16) {
    execute(pad_v2_all_dims::CreateModel_dynamic_output_shape_float16,
            pad_v2_all_dims::is_ignored_dynamic_output_shape_float16,
            pad_v2_all_dims::get_examples_dynamic_output_shape_float16());
}
