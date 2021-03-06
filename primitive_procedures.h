/* Primitive procedures of Scheme */

#ifndef PRIMITIVE_PROCEDURES_H_
#define PRIMITIVE_PROCEDURES_H_

#include <fstream>
#include <cmath>
#include "object.h"

#define NDEBUG

namespace Primitive {
	/* Quit */
	/* Note: obs should/could be empty */
	Object quit(vector<Object>& obs);

	/* Reset Evaluator, initialize environment */
	/* Note: obs should/could be empty */
	Object reset(vector<Object>& obs);

	/* Return #t(true) if object is a number */
	Object is_number(vector<Object>& obs);

	/* Return #t(true) if object is a boolean */
	Object is_boolean(vector<Object>& obs);

	/* Return #t(true) if object is a integer */
	Object is_integer(vector<Object>& obs);

	/* Return #t(true) if object is a real */
	Object is_real(vector<Object>& obs);

	/* Return #t(true) if object is a even integer */
	Object is_even(vector<Object>& obs);

	/* Return #t(true) if object is a odd integer */
	Object is_odd(vector<Object>& obs);

	/* Return #t(true) if object is a pair(or list) */
	Object is_pair(vector<Object>& obs);

	/* Return #t(true) if object is a empty list */
	Object is_null(vector<Object>& obs);

	/* Return #t(true) if object is a list */
	Object is_list(vector<Object>& obs);


/* Primitive operation, note: result's type could be INTEGER or REAL */
	/* Return the sum of obs */
	Object add(vector<Object>& obs);

	/* Return the difference of obs */
	Object sub(vector<Object>& obs);

	/* Return the product of obs */
	Object mul(vector<Object>& obs);

	/* Return the quotient of obs */
	/* Note: always return real(double), which is different from scheme */
	Object div(vector<Object>& obs);

	/* Return remainder, it takes two arguments */
	Object remainder(vector<Object>& obs);

	/* Return quotient */
	Object quotient(vector<Object>& obs);

	/* Return absolute value */
	Object abs(vector<Object>& obs);

	/* Return the square of object */
	Object square(vector<Object>& obs);

	/* Return the sqrt of object */
	Object sqrt(vector<Object>& obs);


/* Return true or false as an Object, all obs must be number */
	/* Return true if obs[0] < obs[1] < obs[2] < ... < obs[n] */
	Object less(vector<Object>& obs);

	/* Return true if obs[0] > obs[1] > obs[2] > ... > obs[n] */
	Object greater(vector<Object>& obs);

	/* Return true if obs[0] == obs[1] == obs[2] == ... == obs[n] */
	/* arguments must be numbers */
	Object op_equal(vector<Object>& obs);

	/* Return true if obs[0] <= obs[1] <= obs[2] <= ... <= obs[n] */
	Object lessEqual(vector<Object>& obs);

	/* Return true if obs[0] >= obs[1] >= obs[2] >= ... >= obs[n] */
	Object greaterEqual(vector<Object>& obs);


	/* Return the minimum object of obs */
	Object min(vector<Object>& obs);

	/* Return the maximum object of obs */
	Object max(vector<Object>& obs);


	/* Return true if obs[0] equal obs[1] equal obs[2] equal .. equal obs[n]*/
	/* arguments could be all types */
	Object equal(vector<Object>& obs);

	/* Operator! */
	Object not(vector<Object>& obs);

	/* Operator| */
	Object or (vector<Object>& obs);

	/* Operator& */
	Object and (vector<Object>& obs);


	/* Print obs */
	Object display(vector<Object>& obs);

	/* New line */
	Object newline(vector<Object>& obs);

	/* Load code from input file and evaluate */
	/* Usage: (load "path/name.scm") */
	Object load(vector<Object>& obs);


	/* Return the pair of obs as an Object */
	/* Note: obs.size() must be 2 */
	Object make_cons(vector<Object>& obs);

	/* Return the list of obs as an Object */
	Object make_list(vector<Object>& obs);

	/* Return the car of object */
	Object car(vector<Object>& obs);

	/* Return the cdr of object */
	Object cdr(vector<Object>& obs);

	/* Return the caar of object */
	Object caar(vector<Object>& obs);

	/* Return the cadr of object */
	Object cadr(vector<Object>& obs);

	/* Return the cdar of object */
	Object cdar(vector<Object>& obs);

	/* Return the cddr of object */
	Object cddr(vector<Object>& obs);

	/* Append an object or a list to obs[0] */
	Object append(vector<Object>& obs);

	/* Return length of obs[0] */
	Object length(vector<Object>& obs);

	/* scheme: map */
	Object map(vector<Object>& obs);

	/* scheme: for-each */
	Object for_each(vector<Object>& obs);
};

#endif