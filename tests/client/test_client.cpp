#include "gtest/gtest.h"
#include "vscf_sha512.h"
#include "vscf_hash.h"

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include "Pure.h"

#include "purekit.pb.h"

TEST(PROTOBUF , Dummy) {

    Pure pure;
    pure.registerUser("alex", "password");


}
