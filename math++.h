// MADE BY amrk000
#include <math.h>

//prime checker: is x prime?
int isprime (int x)
{
	if (x <= 1) return 0;
	for (long i = 2; i <= sqrt(x); ++i) if (x % i == 0) return 0;
	return 1;
}

//cube root of x
double cubrt (double x){return pow(x,1.0/3.0);}

//index root of x
double nrt (double x,double index){return pow(x,1.0/index);}

//ln(x)
double ln (double x){return log(x);}

//Log n(x)
double logn (double n,double x){return (log(x)/log(n));}

//Angle: x Radian To Degree
double to_degree (double x){return (x/3.14159265359)*180;}

//Angle: x Degree To Radian
double to_radian (double x){return (x/180)*3.14159265359;}

//sec(x)
double sec (double x){return 1/cos(x);}

//csc(x)
double csc (double x){return 1/sin(x);}

//cot(x)
double cot (double x){return 1/tan(x);}

//factorial of x
long fact (long x)
{
	if (x < 0) return 0;
	else if (x == 0) return 1;

	long f=1;
	for (long i=1;i<=x;i++) f=f*i;

	return f;
}

//permutation: nPr
long perm (long n,long r)
{
if (n<0 || r<0 || n<r) return 0;
else return fact(n)/fact(n-r);
}

//combination: nCr
long comb (long n,long r)
{
if (n<0 || r<0 || n<r) return 0;
else return perm(n,r)/fact(r);
}
