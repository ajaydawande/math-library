// MY maths library functions
#include "mymaths.h"
#include <stdio.h>
#include <stdlib.h>
/*----------------------------TRIGONOMETRIC FUNCTION------------------------------*/

//         SINE 
double sin(double x) {
	int n = 3;
	long double sin, tmp, temp = 0;
	int y = 0;
	if(x < - (2 * PI)) {
		x = - x;                                              // FOR NEGATIVE VALUE
		temp = 1;
	}
	if(x > (2 * PI)) {
		while(x > (2 * PI)) {                                 // FOR REDUCTION OF VERRY BIG VALUE  BETWEEN 0 TO 2_PI
			x = x - (2 * PI);
		}
	}                         
	sin = tmp = x;
	x = (x * x);
	while (!(tmp >= - 0.0000000001 && tmp <= 0.000000001)) {      
		tmp = (- tmp) * (x) / ((n - 1) * (n));                   // for getting each term multiply by -x^2/(((N - 1) * (N)))
		sin = sin + tmp;                                       // ADDITION OF ALL TERMS FOR GETTING EXACT VALUE 
		n = n + 2;
	}
	if(temp == 0)
		return sin;                      
	else
		return (- sin);
		
	
}
float sinf(float x) {
	int n = 3;
	long double sin, tmp, temp = 0;
	int y = 0;
	if(x < - (2 * PI)) {
		x = - x;                                              // FOR NEGATIVE VALUE
		temp = 1;
	}
	if(x > (2 * PI)) {
		while(x > (2 * PI)) {                                 // FOR REDUCTION OF VERRY BIG VALUE  BETWEEN 0 TO 2_PI
			x = x - (2 * PI);
		}
	}                         
	sin = tmp = x;
	x = (x * x);
	while (!(tmp >= - 0.0000000001 && tmp <= 0.000000001)) {      
		tmp = (- tmp) * (x) / ((n - 1) * (n));                   // for getting each term multiply by -x^2/(((n - 1) * (n)))
		sin = sin + tmp;                                       // ADDITION OF ALL TERMS FOR GETTING EXACT VALUE 
		n = n + 2;
	}
	if(temp == 0)
		return sin;                      
	else
		return (- sin);
		
	
}

long double sinl(long double x) {
	int n = 3;
	long double sin, tmp, temp = 0;
	int y = 0;
	if(x < - (2 * PI)) {
		x = - x;                                              // FOR NEGATIVE VALUE
		temp = 1;
	}
	if(x > (2 * PI)) {
		while(x > (2 * PI)) {                                 // FOR REDUCTION OF VERRY BIG VALUE  BETWEEN 0 TO 2_PI
			x = x - (2 * PI);
		}
	}                         
	sin = x;
	tmp = x;
	x = (x * x);
	while (!(tmp >= - 0.0000000001 && tmp <= 0.000000001)) {      
		tmp = (- tmp) * (x) / ((n - 1) * (n));                   // for getting each term multiply by -x^2/((( n - 1) * (n)))
		sin = sin + tmp;                                       // ADDITION OF ALL TERMS FOR GETTING EXACT VALUE 
		n = n + 2;
	}
	if(temp == 0)
		return sin;                      
	else
		return (- sin);
		
		
	
}
/*-----------------------------COS--------------------------------------------*/

double cos(double x) {
	int n = 2;
	long double cos = 1, tmp = 1;
	if(x < (- 2 * PI)) {
		x = - x;                                          // FOE NEGATIVE VALUE                                       
	}
	if(x > (2 * PI)) {
		while(x > (2 * PI)) {                                 // FOR REDUCTION OF VERRY BIG VALUE  BETWEEN 0 TO 2_PI
			x = x - (2 * PI);
		}
	}                         
	x = x * x;
	while (!(tmp >= - 0.000000001 && tmp <= 0.00000001)) {
		tmp = (- tmp) * (x) / ((n - 1) * (n));            // for getting each team multiply by x^2/((2 * i - 1) * (2 * i))
		cos = cos + tmp;					  // ADDITION OF ALL TERMS
		n = n + 2;
	}
	return cos;
		
}
float cosf(float x) {
	int n = 2;
	long double cos = 1, tmp = 1;
	if(x < (- 2 * PI)) {
		x = - x;                                          // FOE NEGATIVE VALUE                                       
	}
	if(x > (2 * PI)) {
		while(x > (2 * PI)) {                                 // FOR REDUCTION OF VERRY BIG VALUE  BETWEEN 0 TO 2_PI
			x = x - (2 * PI);
		}
	}                         
	x = x * x;
	while (!(tmp >= - 0.0000000001 && tmp <= 0.000000001)) {
		tmp = (- tmp) * (x) / ((n - 1) * (n));            // for gatting each team multiply by x^2/((2 * i - 1) * (2 * i))
		cos = cos + tmp;					  // ADDITION OF ALL TERMS
		n = n + 2;
	}
	return cos;
		
}
long double cosl(long double x) {
	int n = 2;
	long double cos = 1, tmp = 1;
	if(x < (- 2 * PI)) {
		x = - x;                                          // FOE NEGATIVE VALUE                                       
	}
	if(x > (2 * PI)) {
		while(x > (2 * PI)) {                                 // FOR REDUCTION OF VERRY BIG VALUE  BETWEEN 0 TO 2_PI
			x = x - (2 * PI);
		}
	}                         
	x = x * x;
	while (!(tmp >= - 0.0000000001 && tmp <= 0.000000001)) {
		tmp = (- tmp) * (x) / ((n - 1) * (n));            // for getting each team multiply by x^2/((2 * i - 1) * (2 * i))
		cos = cos + tmp;					  // ADDITION OF ALL TERMS
		n = n + 2;
	}
	return cos;
		
}
/*---------------------------------------------------*/
// tan
double tan(double x) {
	long double tan;
	tan = (sin(x) / cos(x));
	return tan;
}
float tanf(float x) {
	long double tan;
	tan = (sin(x) / cos(x));
	return tan;
}
long double tanl(long double x) {
	long double tan;
	tan = (sin(x) / cos(x));
	return tan;
}
/*------------------------------------------------------*/
double sinh(double x) {
	int n = 3;
	long double sinh = x, tmp = x;
	if(x > MAX_2)
		return INFINITY;				// FOR POSITIVE INFINITE VALUE
	if(x < MAX_3)
		return (- INFINITY);				// FOR NEGETIVE INFINITE VALUE
	x = (x * x);
	while (!(tmp >= - 0.0000000001 && tmp <= 0.000000001)) {
		tmp = (tmp) * (x) / ((n - 1) * (n));        // for getting each term multiply by -x^2/((( n - 1) * (n)))
		sinh = sinh + tmp;				// ADDITION OF ALL TERMS FOR GETTING EXACT VALUE	
		n = n + 2;
	}
	return sinh;
}
float sinhf(float x) {
	int n = 3;
	long double sinh = x, tmp = x;
	if(x > MAX_2)
		return INFINITY;				// FOR POSITIVE INFINITE VALUE
	if(x < MAX_3)
		return (- INFINITY);				// FOR NEGETIVE INFINITE VALUE
	x = (x * x);
	while (!(tmp >= - 0.0000000001 && tmp <= 0.000000001)) {
		tmp = (tmp) * (x) / ((n - 1) * (n));        // for getting each term multiply by -x^2/((( n - 1) * (n)))
		sinh = sinh + tmp;				// ADDITION OF ALL TERMS FOR GETTING EXACT VALUE	
		n = n + 2;
	}
	return sinh;
}
long double sinhl(long double x) {
	int n = 3;
	long double sinh = x, tmp = x;
	if(x > MAX_2)
		return INFINITY;				// FOR POSITIVE INFINITE VALUE
	if(x < MAX_3)
		return (- INFINITY);				// FOR NEGETIVE INFINITE VALUE
	x = (x * x);
	while (!(tmp >= - 0.0000000001 && tmp <= 0.000000001)) {
		tmp = (tmp) * (x) / ((n - 1) * (n));        // for getting each term multiply by -x^2/((( n - 1) * (n)))
		sinh = sinh + tmp;				// ADDITION OF ALL TERMS FOR GETTING EXACT VALUE	
		n = n + 2;
	}
	return sinh;
}

double cosh(double x) {
	int n = 2;
	long double cosh = 1, tmp = 1;
	if(x > MAX_2 || x < MAX_3)
		return INFINITY;
	x = (x * x);                                               // FOR POSITIVE INFINITE VALUE
	while (!(tmp >= - 0.0000000001 && tmp <= 0.000000001)) {
		tmp = (tmp) * (x) / ((n - 1) * (n));                 // for getting each term multiply by -x^2/((( n - 1) * (n)))
		cosh = cosh + tmp;	                             // ADDITION OF ALL TERMS FOR GETTING EXACT VALUE
		n = n + 2;
	}
	return cosh;
}

float coshf(float x) {
	int n = 2;
	long double cosh = 1, tmp = 1;
	if(x > MAX_2 || x < MAX_3)
		return INFINITY;
	x = (x * x);                                               // FOR POSITIVE INFINITE VALUE
	while (!(tmp >= - 0.0000000001 && tmp <= 0.000000001)) {
		tmp = (tmp) * (x) / ((n - 1) * (n));                 // for getting each term multiply by -x^2/((( n - 1) * (n)))
		cosh = cosh + tmp;	                             // ADDITION OF ALL TERMS FOR GETTING EXACT VALUE
		n = n + 2;
	}
	return cosh;
}
long double coshl(long double x) {
	int n = 2;
	long double cosh = 1, tmp = 1;
	if(x > MAX_2 || x < MAX_3)
		return INFINITY;
	x = (x * x);                                                     // FOR POSITIVE INFINITE VALUE
	while (!(tmp >= - 0.0000000001 && tmp <= 0.000000001)) {
		tmp = (tmp) * (x) / ((n - 1) * (n));                 // for getting each term multiply by -x^2/((( n - 1) * (n)))
		cosh = cosh + tmp;	                                 // ADDITION OF ALL TERMS FOR GETTING EXACT VALUE
		n = n + 2;
	}
	return cosh;
}

double tanh(double x) {
	long double tanh = 1, temp = 0;
	if(x < - MAX_4) {
		temp = 1;
		x = - x;
	}
	if(x > MAX_4) {
		if(temp == 1) 
			return (- tanh);
		else 
			return tanh;
	}
	else {
		tanh =	sinh(x) / cosh(x);
		return tanh;
	}
}

float tanhf(float x) {
	long double tanh = 1, temp = 0;
	if(x < - MAX_4) {
		temp = 1;
		x = - x;
	}
	if(x > MAX_4) {
		if(temp == 1) 
			return (- tanh);
		else 
			return tanh;
	}
	else {
		tanh =	sinh(x) / cosh(x);
		return tanh;
	}
}
long double tanhl(long double x) {
	long double tanh = 1, temp = 0;
	if(x < - MAX_4) {
		temp = 1;
		x = - x;
	}
	if(x > MAX_4) {
		if(temp == 1) 
			return (- tanh);
		else 
			return tanh;
	}
	else {
		tanh =	sinh(x) / cosh(x);
		return tanh;
	}
}
//Returns the arc (angle) sine of value in radians
//this is sin inverse function
double asin(double x) {
	long double asin = x, tmp = x;
	int n = 1;
	if(x > 1 || x < - 1)                   // if input is outoff range
		return NAN;
	else if (x == 1)
		return M_PI_2;
	else if (x == (double)-1) {		
		return -M_PI_2;
	} 
	if(x == 0)
		return 0;
	
	else {
		x = (x * x);
		while (!(tmp >= - 0.000000001 && tmp <= 0.000000001)) {
			tmp = ((tmp) * (x) * (2 * n - 1) * (2 * n - 1)) / ((2 * n + 1) * (2 * n));    // for getting each term
			asin = asin + tmp;	
			n++;
		}
	return asin;
	}
}
float asinf(float x) {
	long double asin = x, tmp = x;
	int n = 1;
	if(x > 1 || x < - 1)                   // if input is outoff range
		return NAN;
	else if (x == 1)
		return M_PI_2;
	else if (x == (- 1)) 
		return (- M_PI_2); 
	else if(x == 0)
		return 0;
	else {
		x = (x * x);
		while (!(tmp >= - 0.000000001 && tmp <= 0.000000001)) {
			tmp = ((tmp) * (x) * (2 * n - 1) * (2 * n - 1)) / ((2 * n + 1) * (2 * n));    // for getting each term
			asin = asin + tmp;	
			n++;
		}
	return asin;
	}
}

long double asinl(long double x) {
	long double asin = x, tmp = x;
	int n = 1;
	if(x > 1 || x < - 1)                   // if input is outoff range
		return NAN;
	else if (x == 1)
		return M_PI_2;
	else if (x == (- 1)) 
		return (- M_PI_2);
	  else if(x == 0)
		return 0;
	else {
		x = (x * x);
		while (!(tmp >= - 0.000000001 && tmp <= 0.000000001)) {
			tmp = ((tmp) * (x) * (2 * n - 1) * (2 * n - 1)) / ((2 * n + 1) * (2 * n));    // for getting each term
			asin = asin + tmp;	
			n++;
		}
	return asin;
	}
}

double acos(double x) {
	long double acos;
	if(x > 1 || x < - 1) 
		return NAN;
	else if (x == 1)
		return 0;
	else if (x == -1)
		return PI; 
	else if(x == 0)
		return M_PI_2;
	else {
		acos = (PI / 2) - asin(x);
		return acos;
	}
}
float acosf(float x) {
	long double acos;
	if(x > 1 || x < - 1) 
		return NAN;
	else if (x == 1)
		return 0;
	else if (x == -1)
		return PI;  
	else if(x == 0)
		return M_PI_2;
	else {
		acos = (PI / 2) - asin(x);
		return acos;
	}
}
long double acosl(long double x) {
	long double acos;
	if(x > 1 || x < - 1) 
		return NAN;
	else if (x == 1)
		return 0;
	else if (x == -1)
		return PI;  
	else if(x == 0)
		return M_PI_2;
	else {
		acos = (PI / 2) - asin(x);
		return acos;
	}

}
double atan(double x) {
	int i = 2;
	long double atan = x, tmp1, tmp = x;
	// this evalute atan for -1 < x < 1
	if(x > - 1 && x < 1) {
		while (!(tmp >= - 0.01 && tmp <= 0.01)) {
			tmp = (- tmp) * (x) * (i - 1) / ( i + 1);
			atan = atan + tmp;	
			i = i + 2;
		} 
		return atan;
	}
	// this evalute atan for  x >= 1 
	else if(x >= 1) {
		i = 1;
		tmp1 = (1 / x);
		tmp = (1 / x);
		while (!(tmp >= - 0.000001 && tmp <= 0.000001)) {
			tmp = ((- tmp) * (i)) / ((x * x)  * (i + 2));
			tmp1 = tmp1 + tmp;	
			i = i + 2;
		}
		atan = (PI / 2) - tmp1; 
		return atan;
	}
	// this evalute atan for  x <= - 1 
	else if(x <= - 1) {
		i = 1;
		tmp1 = (1 / x);
		tmp = (1 / x);
		while (!(tmp >= - 0.000000001 && tmp <= 0.000000001)) {
			tmp = ((- tmp) * (i)) / ((x * x)  * (i + 2));
			tmp1 = tmp1 + tmp;	
			i = i + 2;
		}
		atan = (- PI / 2) - tmp1; 
		return atan;
	}
		
}
float atanf(float x) {
	int i = 2;
	long double atan = x, tmp1, tmp = x;
	// this evalute atan for -1 < x < 1
	if(x > - 1 && x < 1) {
		while (!(tmp >= - 0.01 && tmp <= 0.01)) {
			tmp = (- tmp) * (x) * (i - 1) / ( i + 1);
			atan = atan + tmp;	
			i = i + 2;
		} 
		return atan;
	}
	// this evalute atan for  x >= 1 
	else if(x >= 1) {
		i = 1;
		tmp1 = (1 / x);
		tmp = (1 / x);
		while (!(tmp >= - 0.000001 && tmp <= 0.000001)) {
			tmp = ((- tmp) * (i)) / ((x * x)  * (i + 2));
			tmp1 = tmp1 + tmp;	
			i = i + 2;
		}
		atan = (PI / 2) - tmp1; 
		return atan;
	}
	// this evalute atan for  x <= - 1 
	else if(x <= - 1) {
		i = 1;
		tmp1 = (1 / x);
		tmp = (1 / x);
		while (!(tmp >= - 0.000000001 && tmp <= 0.000000001)) {
			tmp = ((- tmp) * (i)) / ((x * x)  * (i + 2));
			tmp1 = tmp1 + tmp;	
			i = i + 2;
		}
		atan = (- PI / 2) - tmp1; 
		return atan;
	}
		
}
long double atanl(long double x) {
	int i = 2;
	long double atan = x, tmp1, tmp = x;
	// this evalute atan for -1 < x < 1
	if(x > - 1 && x < 1) {
		while (!(tmp >= - 0.01 && tmp <= 0.01)) {
			tmp = (- tmp) * (x) * (i - 1) / ( i + 1);
			atan = atan + tmp;	
			i = i + 2;
		} 
		return atan;
	}
	// this evalute atan for  x >= 1 
	else if(x >= 1) {
		i = 1;
		tmp1 = (1 / x);
		tmp = (1 / x);
		while (!(tmp >= - 0.000001 && tmp <= 0.000001)) {
			tmp = ((- tmp) * (i)) / ((x * x)  * (i + 2));
			tmp1 = tmp1 + tmp;	
			i = i + 2;
		}
		atan = (PI / 2) - tmp1; 
		return atan;
	}
	// this evalute atan for  x <= - 1 
	else if(x <= - 1) {
		i = 1;
		tmp1 = (1 / x);
		tmp = (1 / x);
		while (!(tmp >= - 0.000000001 && tmp <= 0.000000001)) {
			tmp = ((- tmp) * (i)) / ((x * x)  * (i + 2));
			tmp1 = tmp1 + tmp;	
			i = i + 2;
		}
		atan = (- PI / 2) - tmp1; 
		return atan;
	}
		
}

double atan2(double y,double x) {
	long double result;
	if (x == 0 && y !=0) 
		return M_PI_2;
	if (y == 0)
		return 0;
	
	x = (y / x);
	result = atan(x);
	return result;
}
float atan2f(float y,float x) {
	long double result;
	if (x == 0 && y !=0) 
		return M_PI_2;
	if (y == 0)
		return 0;
	
	x = (y / x);
	result = atan(x);
	return result;
}
long double atan2l(long double y,long double x) {
	long double result;
	if (x == 0 && y !=0) 
		return M_PI_2;
	if (y == 0)
		return 0;
	
	x = (y / x);
	result = atan(x);
	return result;
}
double exp(double x) {
	long double exp = 1;
	long double tmp = 1;
	int n = 1;
	while (!(tmp >= - 0.00000001 && tmp <= 0.00000001)) {
		tmp = (tmp * x) / n;
		exp = exp + tmp;
		n++;
	}	
	return exp;
}
float expf(float x) {
	long double exp = 1;
	long double tmp = 1;
	int n = 1;
	while (!(tmp >= - 0.00000001 && tmp <= 0.00000001)) {
		tmp = (tmp * x) / n;
		exp = exp + tmp;
		n++;
	}	
	return exp;
}
long double expl(long double x) {
	long double exp = 1;
	long double tmp = 1;
	int n = 1;
	while (!(tmp >= - 0.00000001 && tmp <= 0.00000001)) {
		tmp = (tmp * x) / n;
		exp = exp + tmp;
		n++;
	}	
	return exp;
}
double log(double x) {
	long double sum, tmp;
	sum = (x - 1) / (x + 1);
	tmp = (x - 1) / (x + 1);
	int i = 2;
	if (x == 0)
		return (- INFINITY);
	if(x < 0)
		return (- NAN);
	while (!(tmp >= - 0.00000000000001 && tmp <= 0.0000000000001)) {
		tmp = tmp * (((x - 1) * (x - 1) * (i - 1)) / ((i + 1) * (x + 1) * (x + 1)));
		sum = sum + tmp;
		i = i + 2;
	}
	return (2 * sum);
}
float logf(float x) {
	long double sum, tmp;
	sum = (x - 1) / (x + 1);
	tmp = (x - 1) / (x + 1);
	int i = 2;
	if (x == 0)
		return (- INFINITY);
	if(x < 0)
		return (- NAN);
	while (!(tmp >= - 0.00000000000001 && tmp <= 0.0000000000001)) {
		tmp = tmp * (((x - 1) * (x - 1) * (i - 1)) / ((i + 1) * (x + 1) * (x + 1)));
		sum = sum + tmp;
		i = i + 2;
	}
	return (2 * sum);
}
long double logl(long double x) {
	long double sum, tmp;
	sum = (x - 1) / (x + 1);
	tmp = (x - 1) / (x + 1);
	int i = 2;
	if (x == 0)
		return (- INFINITY);
	if(x < 0)
		return (- NAN);
	while (!(tmp >= - 0.00000000000001 && tmp <= 0.0000000000001)) {
		tmp = tmp * (((x - 1) * (x - 1) * (i - 1)) / ((i + 1) * (x + 1) * (x + 1)));
		sum = sum + tmp;
		i = i + 2;
	}
	return (2 * sum);
}


/*------------------------15------------------------------------------------*/
double log10(double x) {
	//Returns the base-10 logarithm of x
	long double p, log10;
	if (x == 0)
		return (- INFINITY);
	else if(x < 0)
		return (- NAN);
	else { 
		log10 = (log(x) / M_LN10);
		return log10;
	}
}
float log10f(float x) {
	//Returns the base-10 logarithm of x
	long double p, log10;
	if (x == 0)
		return (- INFINITY);
	else if(x < 0)
		return (- NAN);
	else { 
		log10 = (log(x) / M_LN10);
		return log10;
	}
}
long double log10l(long double x) {
	//Returns the base-10 logarithm of x
	long double p, log10;
	if (x == 0)
		return (- INFINITY);
	else if(x < 0)
		return (- NAN);
	else { 
		log10 = (log(x) / M_LN10);
		return log10;
	}
}
double sqrt(double x) {
	long double y;
	long double low = 0, high = x, t;
	long double mid = (low + high) / 2;
	int i = 0;
	if(x < 0)
		//suare root of negative no can't be done , it will gone into imaginary case
		return NAN;
	else {
		if(x > 0 && x < 1) {
			low = x;
			high = 1;
		}
		while(1) {
			t = mid * mid;
			if(t == x) {
	        		return mid;
	         		break;
	        	} 
			else {
	        		if(mid * mid > x) {
	        			high = mid;
	                		mid = (low + high) / 2;
				}
	                	 
				else {
               				low = mid;
               				mid = (low + high) / 2;
            			}
         		}
			i++;
      		}
	}
}
long double sqrtl(long double x) {
	long double y;
	long double low = 0, high = x, t;
	long double mid = (low + high) / 2;
	int i = 0;
	if(x < 0)
		//suare root of negative no can't be done , it will gone into imaginary case
		return NAN;
	else {
		if(x > 0 && x < 1) {
			low = x;
			high = 1;
		}
		while(1) {
			t = mid * mid;
			if(t == x) {
	        		return mid;
	         		break;
	        	} 
			else {
	        		if(mid * mid > x) {
	        			high = mid;
	                		mid = (low + high) / 2;
				}
	                	 
				else {
               				low = mid;
               				mid = (low + high) / 2;
            			}
         		}
			i++;
      		}
	}
}
float sqrtf(float x) {
	long double y;
	long double low = 0, high = x, t;
	long double mid = (low + high) / 2;
	int i = 0;
	if(x < 0)
		//suare root of negative no can't be done , it will gone into imaginary case
		return NAN;
	else {
		if(x > 0 && x < 1) {
			low = x;
			high = 1;
		}
		while(1) {
			t = mid * mid;
			if(t == x) {
	        		return mid;
	         		break;
	        	} 
			else {
	        		if(mid * mid > x) {
	        			high = mid;
	                		mid = (low + high) / 2;
				}
	                	 
				else {
               				low = mid;
               				mid = (low + high) / 2;
            			}
         		}
			i++;
      		}
	}
}
 
double power(double x, double y) {
	int n = 1;
	long double pow = 1;
	if(y == 0)
		return 1;
	if(y > 0) {
		while(n <= y) {
			pow = pow * x;
			n++;
		}
		return pow;
	}
	if(y < 0) {
		int m = 1;
		y = - y;
		while(m <= y) {
			pow = pow * x;
			m++;
		}
		return (n / pow);
	}
}

float powerf(float x, float y) {
	int n = 1;
	long double pow = 1;
	if(y == 0)
		return 1;
	if(y > 0) {
		while(n <= y) {
			pow = pow * x;
			n++;
		}
		return pow;
	}
	if(y < 0) {
		int m = 1;
		y = - y;
		while(m <= y) {
			pow = pow * x;
			m++;
		}
		return (n / pow);
	}
}
long double powerl(long double x, long double y) {
	int n = 1;
	long double pow = 1;
	if(y == 0)
		return 1;
	if(y > 0) {
		while(n <= y) {
			pow = pow * x;
			n++;
		}
		return pow;
	}
	if(y < 0) {
		int m = 1;
		y = - y;
		while(m <= y) {
			pow = pow * x;
			m++;
		}
		return (n / pow);
	}
}

double mfmod(double x, double y) {
	long double temp, temp1 = 0;
	if(x == 0 && y != 0)
		return 0;
	else if(y == 0 && x != 0)  // if denominator is zero then return nan
		return (- NAN);
	else if(x == 0 && y == 0)  // if denominator is zero then return nan
		return (- NAN);
	if(x < 0) {
		x = - x;	   // for negative value of x
		temp1 = 1;
	}
	else if(y < 0) {           // for negative value of x
		y = - y;
	}
	temp = (x / y);
	while(temp >= 1) {
		x = x - y;
		temp--;
	}
	if(temp1 == 0)
		return x;
	else
		return (- x);
}

float mfmodf(float x, float y) {
	long double temp, temp1 = 0;
	if(x == 0 && y != 0)
		return 0;
	else if(y == 0 && x != 0)  // if denominator is zero then return nan
		return (- NAN);
	else if(x == 0 && y == 0)  // if denominator is zero then return nan
		return (- NAN);
	if(x < 0) {
		x = - x;	   // for negative value of x
		temp1 = 1;
	}
	else if(y < 0) {           // for negative value of x
		y = - y;
	}
	temp = (x / y);
	while(temp >= 1) {
		x = x - y;
		temp--;
	}
	if(temp1 == 0)
		return x;
	else
		return (- x);
}

long double mfmodl(long double x, long double y) {
	long double temp, temp1 = 0;
	if(x == 0 && y != 0)
		return 0;
	else if(y == 0 && x != 0)  // if denominator is zero then return nan
		return (- NAN);
	else if(x == 0 && y == 0)  // if denominator is zero then return nan
		return (- NAN);
	if(x < 0) {
		x = - x;	   // for negative value of x
		temp1 = 1;
	}
	else if(y < 0) {           // for negative value of x
		y = - y;
	}
	temp = (x / y);
	while(temp >= 1) {
		x = x - y;
		temp--;
	}
	if(temp1 == 0)
		return x;
	else
		return (- x);
}
double floor(double x) {
	//Returns the largest integer value less than or equal to x
	 if(x >= 0 || (x - (int)x) == 0)
	 	return (int)x;
	 return (int)x - 1.0;
}

float floorf(float x) {
	if(x >= 0 || (x - (int)x) == 0)
	 	return (int)x;
	return (int)x - 1.0;
}

long double floorl(long double x) {
	//Returns the largest integer value less than or equal to x
	 if(x >= 0 || (x - (int)x) == 0)
	 	return (int)x;
	return (int)x - 1.0;
}
double ceil(double x) {
	if(x <= 0 || (x - (int)x) == 0)
	 	return (int)x;
	return (int)x + 1.0;
}

float ceilf(float x) {
	if(x <= 0 || (x - (int)x) == 0)
	 	return (int)x;
	return (int)x + 1.0;
}
long double ceill(long double x) {
	if(x <= 0 || (x - (int)x) == 0)
	 	return (int)x;
	return (int)x + 1.0;
}

double fabs(double x) {
	//Returns the absolute value of x
	if(x < 0)
		return ( - x);
	else
		return x;
}

float fabsf(float x) {
	//Returns the absolute value of x
	if(x < 0)
		return ( - x);
	else
		return x;
}
long double fabsl(long double x) {
	//Returns the absolute value of x
	if(x < 0)
		return ( - x);
	else
		return x;
}

int fact(unsigned int x) {
	int k = 1;
	if (x == 0)
		return 1;
	else {
		k = x * fact(x - 1);
		return k;
	}
}
		
	
double idexp(double x, int exponent) {
	long double result;
	result = x * power(2, exponent);
	return result;
	
	
}
float idexpf(float x, int exponent) {
	long double result;
	result = x * power(2, exponent);
	return result;
	
	
}
long double idexpl(long double x, int exponent) {
	long double result;
	result = x * power(2, exponent);
	return result;
	
}

double frexp(double x,int *exp) {
	double z, i;
	int n, tmp = 0;
	if(x < 0) {
		x = - x;
		tmp = 1;
	}
	i = (int)x; 
	for(z = i; z <= 2 * (int)x; z++) {
		for(n = 1; n <= z; n++) {
			if((z == power(2, n)) && ((x/z) < 1)) {
				*exp = n;
				if(tmp == 1)
					return (- x / z);
				return (x / z);
		}
		}
	}
}
float frexpf(float x,int *exp) {
	double z, i;
	int n, tmp = 0;
	if(x < 0) {
		x = - x;
		tmp = 1;
	}
	i = (int)x; 
	for(z = i; z <= 2 * (int)x; z++) {
		for(n = 1; n <= z; n++) {
			if((z == power(2, n)) && ((x/z) < 1)) {
				*exp = n;
				if(tmp == 1)
					return (- x / z);
				return (x / z);
			}
		}
	}
}
long double frexpl(long double x,int *exp) {
	double z, i;
	int n, tmp = 0;
	if(x < 0) {
		x = - x;
		tmp = 1;
	}
	i = (int)x; 
	for(z = i; z <= 2 * (int)x; z++) {
		for(n = 1; n <= z; n++) {
			if((z == power(2, n)) && ((x/z) < 1)) {
				*exp = n;
				if(tmp == 1)
					return (- x / z);
				return (x / z);
			}
		}
	}
}








