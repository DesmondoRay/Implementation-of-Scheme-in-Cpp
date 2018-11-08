/* io_function */

#ifndef IO_FUNCTION_
#define IO_FUNCTION_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;
#include "object.h"

/* Print evaluation result. */
void print_result(const Object& ob, int mode = 0);

/* Read user input. */
string get_input(istream &in);

/* Split input string and store them in a vector<string>. */
vector<string> split_input(string& input);

/* Convert '(<exp1> ... <expn>) too (list <exp1> ... <expn>) */
void convert_to_list(vector<string>& split);

#endif