#include <stdio.h>
 
int main(void) {
	// your code goes here
	int t;
	scanf ("%d", &t);
	while (t--) {
	    int n;
	    scanf ("%d", &n);
	    int num = 0;
	    while (n) {
	        num *= 10;
	        num += n%10;
	        n /= 10;
	        printf ("%d\n", n);
	    }
	    printf ("%d\n", num);
	}
	return 0;
}
 
