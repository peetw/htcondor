/***************************************************************
 *
 * Copyright (C) 1990-2011, Condor Team, Computer Sciences Department,
 * University of Wisconsin-Madison, WI.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License"); you
 * may not use this file except in compliance with the License.  You may
 * obtain a copy of the License at
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ***************************************************************/
#include "condor_common.h"
#include "condor_debug.h"
#include "condor_config.h"

#include "function_test_driver.h"
#include "emit.h"
#include "unit_test_utils.h"


static bool test_param_integer() {
    emit_test("Test param_integer()");
    PASS;
}


bool FTEST_config(void) {
	emit_function("STL string utils");
	emit_comment("Functions from condor_config.h");
	
		// driver to run the tests and all required setup
	FunctionDriver driver;

    driver.register_function(test_param_integer);

    return driver.do_all_functions();
}
