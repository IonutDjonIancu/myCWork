// external file containing useable functions

int Factorial(int n) {
	int product;

	for (product = 1; n; product *= n--);
	return product;
}
