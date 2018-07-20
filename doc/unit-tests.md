Compiling/running unit tests
------------------------------------

Unit tests will be automatically compiled if dependencies were met in configure
and tests weren't explicitly disabled.

After configuring, they can be run with 'make check'.

To run the SLTCd tests manually, launch src/test/test_SLTC .

To add more SLTCd tests, add `BOOST_AUTO_TEST_CASE` functions to the existing
.cpp files in the test/ directory or add new .cpp files that
implement new BOOST_AUTO_TEST_SUITE sections.

To run the SLTC-qt tests manually, launch src/qt/test/SLTC-qt_test

To add more SLTC-qt tests, add them to the `src/qt/test/` directory and
the `src/qt/test/test_main.cpp` file.
