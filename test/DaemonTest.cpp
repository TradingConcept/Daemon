#define BOOST_TEST_MODULE DaemonTest

#include "DaemonLib.hpp"

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(DaemonSuite)

BOOST_AUTO_TEST_CASE(AdditionTest)
{
    DaemonLib daemon;
    BOOST_CHECK_EQUAL(daemon.run(), 0);
}

BOOST_AUTO_TEST_CASE(RunningTest)
{
    DaemonLib daemon;
    BOOST_CHECK_EQUAL(daemon.run(), 0);
}


BOOST_AUTO_TEST_SUITE_END()