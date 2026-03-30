#pragma once

template <typename generiX>
generiX absolute(generiX X) {
	if (X < 0) return X * -1;
	else return X;
}

template <typename generiX>
generiX power(generiX X, int n) {
	generiX result = 1;
	for (int i = 0; i < n; i++) {
		result *= X;
	}
	return result;
}

long long factorial(int n) {
	if (n == 0) return 1;
	long long factorialing = 1;
	for (int i = n; i > 0; i--) {
		factorialing *= i;
	}
	return factorialing;
}

template <typename generiX>
double squareRoot(generiX X) {
	if (X == 0) return 0;
	X = absolute(X);
	generiX estimate = X;
	generiX result = 0;
	int counter = 0;
	while ((estimate - result)) {
		result = estimate;
		estimate = 0.5 * (estimate + X / estimate);
		counter++;
		if (counter == 100) {
			std::cout << "100 iterations reached. Broke early" << endl;
			return result;
		}
	}
	return result;
}

double pi() {
	double crust = 0;
	for (double ip = 0; ip < 8; ip++) {//any more than 8 and it returns inf
		crust += 1.0 / power(16, ip) *
			(4.0 / (8.0 * ip + 1.0) - 2.0 / (8.0 * ip + 4.0) - 1.0 / (8.0 * ip + 5.0) - 1.0 / (8.0 * ip + 6.0));
	}
	return crust;
}

template <typename generiX>
double sine(generiX X) {
	int holdSign = X / absolute(X);
	double holdX = static_cast<double>(X);
	while (holdX > pi()) {
		holdX -= pi();
		holdSign *= -1;
	}
	double result = 0;
	for (int n = 0; n < 9; n++) {
		double nume = power(-1, n);
		long long denom = factorial(2 * n + 1);
		result += nume / denom * power(holdX, 2 * n + 1);
	}
	return result;
}

template <typename generiX>
double cosine(generiX X) {
	return sine(pi() / 2 - X);
}

template <typename generiX>
double tangent(generiX X) {
	return sin(X) / cosine(X);
}