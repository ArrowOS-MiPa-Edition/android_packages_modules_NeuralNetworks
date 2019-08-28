// Generated from sqrt.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::sqrt {

const TestModel& get_test_model() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_2,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f, 1.0f, 1.1f, 1.2f, 1.3f, 1.4f, 1.5f, 1.6f, 1.7f, 1.8f, 1.9f, 2.0f, 2.1f, 2.2f, 2.3f, 2.4f, 2.5f, 2.6f, 2.7f, 2.8f, 2.9f, 3.0f, 3.1f, 3.2f, 3.3f, 3.4f, 3.5f, 3.6f, 3.7f, 3.8f, 3.9f, 4.0f, 4.1f, 4.2f, 4.3f, 4.4f, 4.5f, 4.6f, 4.7f, 4.8f, 4.9f, 5.0f, 5.1f, 5.2f, 5.3f, 5.4f, 5.5f, 5.6f, 5.7f, 5.8f, 5.9f, 6.0f, 6.1f, 6.2f, 6.3f, 6.4f, 6.5f, 6.6f, 6.7f, 6.8f, 6.9f, 7.0f, 7.1f, 7.2f, 7.3f, 7.4f, 7.5f, 7.6f, 7.7f, 7.8f, 7.9f, 8.0f, 8.1f, 8.2f, 8.3f, 8.4f, 8.5f, 8.6f, 8.7f, 8.8f, 8.9f, 9.0f, 9.1f, 9.2f, 9.3f, 9.4f, 9.5f, 9.6f, 9.7f, 9.8f, 9.9f, 10.0f, 10.1f, 10.2f, 10.3f, 10.4f, 10.5f, 10.6f, 10.7f, 10.8f, 10.9f, 11.0f, 11.1f, 11.2f, 11.3f, 11.4f, 11.5f, 11.6f, 11.7f, 11.8f, 11.9f}),
                .dimensions = {1, 2, 3, 4, 5},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.31622776601683794f, 0.4472135954999579f, 0.5477225575051661f, 0.6324555320336759f, 0.7071067811865476f, 0.7745966692414834f, 0.8366600265340756f, 0.8944271909999159f, 0.9486832980505138f, 1.0f, 1.0488088481701516f, 1.0954451150103321f, 1.140175425099138f, 1.1832159566199232f, 1.224744871391589f, 1.2649110640673518f, 1.3038404810405297f, 1.3416407864998738f, 1.378404875209022f, 1.4142135623730951f, 1.449137674618944f, 1.4832396974191326f, 1.51657508881031f, 1.5491933384829668f, 1.5811388300841898f, 1.61245154965971f, 1.6431676725154984f, 1.6733200530681511f, 1.70293863659264f, 1.7320508075688772f, 1.760681686165901f, 1.7888543819998317f, 1.816590212458495f, 1.8439088914585775f, 1.8708286933869707f, 1.8973665961010275f, 1.9235384061671346f, 1.9493588689617927f, 1.9748417658131499f, 2.0f, 2.0248456731316584f, 2.04939015319192f, 2.073644135332772f, 2.0976176963403033f, 2.1213203435596424f, 2.1447610589527217f, 2.16794833886788f, 2.1908902300206643f, 2.2135943621178655f, 2.23606797749979f, 2.258317958127243f, 2.280350850198276f, 2.3021728866442674f, 2.32379000772445f, 2.345207879911715f, 2.3664319132398464f, 2.3874672772626644f, 2.4083189157584592f, 2.4289915602982237f, 2.449489742783178f, 2.4698178070456938f, 2.4899799195977463f, 2.5099800796022267f, 2.5298221281347035f, 2.5495097567963922f, 2.569046515733026f, 2.588435821108957f, 2.6076809620810595f, 2.6267851073127395f, 2.6457513110645907f, 2.6645825188948455f, 2.6832815729997477f, 2.701851217221259f, 2.7202941017470885f, 2.7386127875258306f, 2.756809750418044f, 2.7748873851023217f, 2.792848008753788f, 2.8106938645110393f, 2.8284271247461903f, 2.8460498941515415f, 2.8635642126552705f, 2.8809720581775866f, 2.898275349237888f, 2.9154759474226504f, 2.932575659723036f, 2.949576240750525f, 2.9664793948382653f, 2.9832867780352594f, 3.0f, 3.0166206257996713f, 3.03315017762062f, 3.0495901363953815f, 3.0659419433511785f, 3.082207001484488f, 3.0983866769659336f, 3.1144823004794873f, 3.1304951684997055f, 3.146426544510455f, 3.1622776601683795f, 3.1780497164141406f, 3.1937438845342623f, 3.2093613071762426f, 3.22490309931942f, 3.24037034920393f, 3.255764119219941f, 3.271085446759225f, 3.286335345030997f, 3.3015148038438356f, 3.3166247903554f, 3.331666249791536f, 3.3466401061363023f, 3.361547262794322f, 3.3763886032268267f, 3.391164991562634f, 3.40587727318528f, 3.420526275297414f, 3.4351128074635335f, 3.449637662132068f}),
                .dimensions = {1, 2, 3, 4, 5},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::SQRT
            }},
        .outputIndexes = {1}
    };
    return model;
}

const auto dummy_test_model = TestModelManager::get().add("sqrt", get_test_model());

}  // namespace generated_tests::sqrt

namespace generated_tests::sqrt {

const TestModel& get_test_model_relaxed() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = true,
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f, 1.0f, 1.1f, 1.2f, 1.3f, 1.4f, 1.5f, 1.6f, 1.7f, 1.8f, 1.9f, 2.0f, 2.1f, 2.2f, 2.3f, 2.4f, 2.5f, 2.6f, 2.7f, 2.8f, 2.9f, 3.0f, 3.1f, 3.2f, 3.3f, 3.4f, 3.5f, 3.6f, 3.7f, 3.8f, 3.9f, 4.0f, 4.1f, 4.2f, 4.3f, 4.4f, 4.5f, 4.6f, 4.7f, 4.8f, 4.9f, 5.0f, 5.1f, 5.2f, 5.3f, 5.4f, 5.5f, 5.6f, 5.7f, 5.8f, 5.9f, 6.0f, 6.1f, 6.2f, 6.3f, 6.4f, 6.5f, 6.6f, 6.7f, 6.8f, 6.9f, 7.0f, 7.1f, 7.2f, 7.3f, 7.4f, 7.5f, 7.6f, 7.7f, 7.8f, 7.9f, 8.0f, 8.1f, 8.2f, 8.3f, 8.4f, 8.5f, 8.6f, 8.7f, 8.8f, 8.9f, 9.0f, 9.1f, 9.2f, 9.3f, 9.4f, 9.5f, 9.6f, 9.7f, 9.8f, 9.9f, 10.0f, 10.1f, 10.2f, 10.3f, 10.4f, 10.5f, 10.6f, 10.7f, 10.8f, 10.9f, 11.0f, 11.1f, 11.2f, 11.3f, 11.4f, 11.5f, 11.6f, 11.7f, 11.8f, 11.9f}),
                .dimensions = {1, 2, 3, 4, 5},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<float>({0.0f, 0.31622776601683794f, 0.4472135954999579f, 0.5477225575051661f, 0.6324555320336759f, 0.7071067811865476f, 0.7745966692414834f, 0.8366600265340756f, 0.8944271909999159f, 0.9486832980505138f, 1.0f, 1.0488088481701516f, 1.0954451150103321f, 1.140175425099138f, 1.1832159566199232f, 1.224744871391589f, 1.2649110640673518f, 1.3038404810405297f, 1.3416407864998738f, 1.378404875209022f, 1.4142135623730951f, 1.449137674618944f, 1.4832396974191326f, 1.51657508881031f, 1.5491933384829668f, 1.5811388300841898f, 1.61245154965971f, 1.6431676725154984f, 1.6733200530681511f, 1.70293863659264f, 1.7320508075688772f, 1.760681686165901f, 1.7888543819998317f, 1.816590212458495f, 1.8439088914585775f, 1.8708286933869707f, 1.8973665961010275f, 1.9235384061671346f, 1.9493588689617927f, 1.9748417658131499f, 2.0f, 2.0248456731316584f, 2.04939015319192f, 2.073644135332772f, 2.0976176963403033f, 2.1213203435596424f, 2.1447610589527217f, 2.16794833886788f, 2.1908902300206643f, 2.2135943621178655f, 2.23606797749979f, 2.258317958127243f, 2.280350850198276f, 2.3021728866442674f, 2.32379000772445f, 2.345207879911715f, 2.3664319132398464f, 2.3874672772626644f, 2.4083189157584592f, 2.4289915602982237f, 2.449489742783178f, 2.4698178070456938f, 2.4899799195977463f, 2.5099800796022267f, 2.5298221281347035f, 2.5495097567963922f, 2.569046515733026f, 2.588435821108957f, 2.6076809620810595f, 2.6267851073127395f, 2.6457513110645907f, 2.6645825188948455f, 2.6832815729997477f, 2.701851217221259f, 2.7202941017470885f, 2.7386127875258306f, 2.756809750418044f, 2.7748873851023217f, 2.792848008753788f, 2.8106938645110393f, 2.8284271247461903f, 2.8460498941515415f, 2.8635642126552705f, 2.8809720581775866f, 2.898275349237888f, 2.9154759474226504f, 2.932575659723036f, 2.949576240750525f, 2.9664793948382653f, 2.9832867780352594f, 3.0f, 3.0166206257996713f, 3.03315017762062f, 3.0495901363953815f, 3.0659419433511785f, 3.082207001484488f, 3.0983866769659336f, 3.1144823004794873f, 3.1304951684997055f, 3.146426544510455f, 3.1622776601683795f, 3.1780497164141406f, 3.1937438845342623f, 3.2093613071762426f, 3.22490309931942f, 3.24037034920393f, 3.255764119219941f, 3.271085446759225f, 3.286335345030997f, 3.3015148038438356f, 3.3166247903554f, 3.331666249791536f, 3.3466401061363023f, 3.361547262794322f, 3.3763886032268267f, 3.391164991562634f, 3.40587727318528f, 3.420526275297414f, 3.4351128074635335f, 3.449637662132068f}),
                .dimensions = {1, 2, 3, 4, 5},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::SQRT
            }},
        .outputIndexes = {1}
    };
    return model;
}

const auto dummy_test_model_relaxed = TestModelManager::get().add("sqrt_relaxed", get_test_model_relaxed());

}  // namespace generated_tests::sqrt

namespace generated_tests::sqrt {

const TestModel& get_test_model_float16() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_2,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.10000000149011612f, 0.20000000298023224f, 0.30000001192092896f, 0.4000000059604645f, 0.5f, 0.6000000238418579f, 0.699999988079071f, 0.800000011920929f, 0.8999999761581421f, 1.0f, 1.100000023841858f, 1.2000000476837158f, 1.2999999523162842f, 1.399999976158142f, 1.5f, 1.600000023841858f, 1.7000000476837158f, 1.7999999523162842f, 1.899999976158142f, 2.0f, 2.0999999046325684f, 2.200000047683716f, 2.299999952316284f, 2.4000000953674316f, 2.5f, 2.5999999046325684f, 2.700000047683716f, 2.799999952316284f, 2.9000000953674316f, 3.0f, 3.0999999046325684f, 3.200000047683716f, 3.299999952316284f, 3.4000000953674316f, 3.5f, 3.5999999046325684f, 3.700000047683716f, 3.799999952316284f, 3.9000000953674316f, 4.0f, 4.099999904632568f, 4.199999809265137f, 4.300000190734863f, 4.400000095367432f, 4.5f, 4.599999904632568f, 4.699999809265137f, 4.800000190734863f, 4.900000095367432f, 5.0f, 5.099999904632568f, 5.199999809265137f, 5.300000190734863f, 5.400000095367432f, 5.5f, 5.599999904632568f, 5.699999809265137f, 5.800000190734863f, 5.900000095367432f, 6.0f, 6.099999904632568f, 6.199999809265137f, 6.300000190734863f, 6.400000095367432f, 6.5f, 6.599999904632568f, 6.699999809265137f, 6.800000190734863f, 6.900000095367432f, 7.0f, 7.099999904632568f, 7.199999809265137f, 7.300000190734863f, 7.400000095367432f, 7.5f, 7.599999904632568f, 7.699999809265137f, 7.800000190734863f, 7.900000095367432f, 8.0f, 8.100000381469727f, 8.199999809265137f, 8.300000190734863f, 8.399999618530273f, 8.5f, 8.600000381469727f, 8.699999809265137f, 8.800000190734863f, 8.899999618530273f, 9.0f, 9.100000381469727f, 9.199999809265137f, 9.300000190734863f, 9.399999618530273f, 9.5f, 9.600000381469727f, 9.699999809265137f, 9.800000190734863f, 9.899999618530273f, 10.0f, 10.100000381469727f, 10.199999809265137f, 10.300000190734863f, 10.399999618530273f, 10.5f, 10.600000381469727f, 10.699999809265137f, 10.800000190734863f, 10.899999618530273f, 11.0f, 11.100000381469727f, 11.199999809265137f, 11.300000190734863f, 11.399999618530273f, 11.5f, 11.600000381469727f, 11.699999809265137f, 11.800000190734863f, 11.899999618530273f}),
                .dimensions = {1, 2, 3, 4, 5},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<_Float16>({0.0f, 0.3162277638912201f, 0.4472135901451111f, 0.547722578048706f, 0.6324555277824402f, 0.7071067690849304f, 0.7745966911315918f, 0.8366600275039673f, 0.8944271802902222f, 0.9486833214759827f, 1.0f, 1.0488088130950928f, 1.095445156097412f, 1.140175461769104f, 1.1832159757614136f, 1.2247449159622192f, 1.2649110555648804f, 1.3038405179977417f, 1.341640830039978f, 1.3784048557281494f, 1.4142135381698608f, 1.4491376876831055f, 1.4832396507263184f, 1.5165750980377197f, 1.5491933822631836f, 1.5811388492584229f, 1.6124515533447266f, 1.6431676149368286f, 1.6733200550079346f, 1.7029386758804321f, 1.7320507764816284f, 1.7606816291809082f, 1.7888543605804443f, 1.8165901899337769f, 1.8439089059829712f, 1.8708287477493286f, 1.8973666429519653f, 1.9235384464263916f, 1.9493588209152222f, 1.9748417139053345f, 2.0f, 2.024845600128174f, 2.0493900775909424f, 2.0736441612243652f, 2.0976176261901855f, 2.1213202476501465f, 2.144761085510254f, 2.1679482460021973f, 2.190890312194824f, 2.213594436645508f, 2.2360680103302f, 2.2583179473876953f, 2.280350923538208f, 2.302172899246216f, 2.3237900733947754f, 2.345207929611206f, 2.366431951522827f, 2.387467384338379f, 2.4083189964294434f, 2.4289915561676025f, 2.4494898319244385f, 2.469817876815796f, 2.4899799823760986f, 2.5099799633026123f, 2.5298221111297607f, 2.5495097637176514f, 2.5690464973449707f, 2.5884358882904053f, 2.6076810359954834f, 2.6267850399017334f, 2.6457512378692627f, 2.6645824909210205f, 2.683281660079956f, 2.7018511295318604f, 2.7202939987182617f, 2.7386128902435303f, 2.756809711456299f, 2.7748873233795166f, 2.7928481101989746f, 2.8106939792633057f, 2.8284270763397217f, 2.8460497856140137f, 2.8635642528533936f, 2.880972146987915f, 2.898275375366211f, 2.915475845336914f, 2.9325757026672363f, 2.9495761394500732f, 2.9664793014526367f, 2.9832868576049805f, 3.0f, 3.016620635986328f, 3.0331501960754395f, 3.0495901107788086f, 3.0659420490264893f, 3.082206964492798f, 3.098386764526367f, 3.1144824028015137f, 3.130495071411133f, 3.1464264392852783f, 3.1622776985168457f, 3.1780498027801514f, 3.193743944168091f, 3.2093613147735596f, 3.224903106689453f, 3.240370273590088f, 3.2557640075683594f, 3.271085500717163f, 3.2863352298736572f, 3.3015148639678955f, 3.316624879837036f, 3.3316662311553955f, 3.346640110015869f, 3.3615472316741943f, 3.3763885498046875f, 3.391165018081665f, 3.4058773517608643f, 3.4205262660980225f, 3.435112714767456f, 3.4496376514434814f}),
                .dimensions = {1, 2, 3, 4, 5},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_FLOAT16,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0},
                .outputs = {1},
                .type = TestOperationType::SQRT
            }},
        .outputIndexes = {1}
    };
    return model;
}

const auto dummy_test_model_float16 = TestModelManager::get().add("sqrt_float16", get_test_model_float16());

}  // namespace generated_tests::sqrt

