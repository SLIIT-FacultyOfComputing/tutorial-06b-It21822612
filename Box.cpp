#include "Box.h"

// Implement setters and getters
void setLength(int l) {
	length = l;
}
void setWidth(int w) {
	width = w;
}
void setHeight(int h) {
	heigth = h;
}

int getLength() {
	return length;
}
int getWidth() {
	return width;
}
int getHeight() {
	return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
	return length * heigth * width;
}
