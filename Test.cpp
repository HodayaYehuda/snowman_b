
#include "doctest.h"
#include "snowman.hpp"
#include <string>
using namespace ariel;
using namespace std;

TEST_CASE("Good snowman code") {
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(44444432) == string("_____\n(_*_)\n(- -)\n(> <)\n(" ")"));
    CHECK(snowman(41341144) == string("___\n(_*_)\n(O,-)\n<(   )>\n(   )"));
    CHECK(snowman(11111111) == string("   \n_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(snowman(22222222) == string("___\n.....\n\\(o.o)/\n(] [)\n(" ")"));
    CHECK(snowman(33333333) == string(" _ \n /_\\ \n(O_O)\n/(> <)\\n(___)"));
    CHECK(snowman(44444444) == string("___\n (_*_) \n(- -)\n(   )\n(   )"));
    CHECK(snowman(12341214) == string("   \n _===_ \n(O.-)/\n<( : )\n(   )"));
    CHECK(snowman(12344321) == string("   \n _===_ \n(O.-)\n(] [)\\n( : )"));
    CHECK(snowman(12333321) == string("   \n _===_ \n(O.O)\n/(] [)\\n( : )"));
    CHECK(snowman(23232223) == string("___ \n ..... \n\\(o_O)/\n(] [)\n(___)"));
    CHECK(snowman(11112311) == string("    \n _===_\n\\(.,.) \n( : )\\n( : )"));
    CHECK(snowman(44114432) == string("  _  \n (_*_)\n(. .)\n(> <)\n(" ")"));
    CHECK(snowman(242244113) == string("___\n.....\n(o o)\n( : )\n( : )"));
    CHECK(snowman(31333342) == string(" _ \n/_\\n(O,O)\n/(   )\\n(" ")"));

}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(-41341144));
    CHECK_THROWS(snowman(777777));
    CHECK_THROWS(snowman(444444444));
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(-1));
    CHECK_THROWS(snowman(11192311));
    CHECK_THROWS(snowman(12342));





}

