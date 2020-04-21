/*
 * movie.cpp
 *
 *  Created on: 13 abr 2020
 *      Author: tropi
 */

#include "movie.h"
#include <iostream>
movie::movie(std::string name, std::string rating, int watched): _name(name), _rating(rating), _watched(watched) {


}

movie::movie(movie &&other): _name(""), _rating(""), _watched(0){
	_name = other._name;
	_rating = other._rating;
	_watched = other._watched;

	other._name = "";
	other._rating = "";
	other._watched = 0;
	std::cout << "Move constructor called\n";
}

movie::movie(const movie &copy): movie(copy._name,copy._rating,copy._watched){
	std::cout << "Copy constructor called\n";
}
std::string movie::get_name() const{
	return _name;
}

void movie::display() const{
	std::cout << this->_name << " " << this->_rating << " " << this->_watched << std::endl;
}

void movie::set_watched(int w){
	if(w < 0){
		return;
	}
	this->_watched = w;
}

movie::~movie() {

}

