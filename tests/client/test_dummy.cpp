#include "gtest/gtest.h"
#include "vscf_sha512.h"
#include "vscf_hash.h"

TEST(One, EqualsOne) {
    EXPECT_EQ(1, 1);
}

TEST(HASH, Sha512Works) {
    vscf_sha512_t *sha512 = vscf_sha512_new();
    vscf_impl_t *impl = vscf_sha512_impl(sha512);

    EXPECT_TRUE( impl != NULL );

    vscf_sha512_destroy(&sha512);
}
