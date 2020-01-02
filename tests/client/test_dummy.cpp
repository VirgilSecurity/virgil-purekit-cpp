#include "gtest/gtest.h"
#include "vscf_sha512.h"
#include "vscf_hash.h"

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>

#include "purekit.pb.h"



TEST(One, EqualsOne) {
    EXPECT_EQ(1, 1);
}

TEST(HASH, Sha512Works) {
    vscf_sha512_t *sha512 = vscf_sha512_new();
    vscf_impl_t *impl = vscf_sha512_impl(sha512);

    EXPECT_TRUE( impl != NULL );

    vscf_sha512_destroy(&sha512);
}


TEST(CURL, DummyCurl) {
    try
    {
        // That's all that is needed to do cleanup of used resources (RAII style).
        curlpp::Cleanup myCleanup;

        // Our request to be sent.
        curlpp::Easy myRequest;

        // Set the URL.
        myRequest.setOpt<curlpp::options::Url>("http://example.com");

        // Send request and get a result.
        // By default the result goes to standard output.
        myRequest.perform();
    }

    catch(curlpp::RuntimeError & e)
    {
        std::cout << e.what() << std::endl;
    }

    catch(curlpp::LogicError & e)
    {
        std::cout << e.what() << std::endl;
    }
}

TEST(PROTOBUF , Dummy) {
    build::DatabaseRecord r;

}
