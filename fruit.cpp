#include "over.h"
void fruit::operator*(float r) {
	price *= (100 + r) / 100.0;
}
float fruit::show() {
	return price * many;
}
void apple::operator-(int dr) {
	redness += dr;
}
void apple::discount(float aa) {
	this->operator*(aa);
}
