/*
 * moviesList.cpp
 *
 *  Created on: 13 abr 2020
 *      Author: tropi
 */

#include "moviesList.h"
#include <iostream>
moviesList::moviesList(){
	// TODO Auto-generated constructor stub
	movies = new std::vector<movie>;
}

bool moviesList::add(std::string name, std::string rating, int watched){
	for(const auto &m: *movies){
		if(m.get_name().compare(name)==0){
			return 0;
		}
	}
	std::cout << name << " added\n";
	movie m(name,rating,watched);
	movies->push_back(m);
	return 1;
}


void moviesList::display() const{
	if(movies->empty()){
		std::cout << "no movies in the list\n";
		return;
	}
	for(const auto &m: *movies){
		m.display();
	}
}

bool moviesList::incrementWatch(std::string name, int w){
	for(auto &m:*movies){
		if(m.get_name().compare(name) == 0){
			m.set_watched(w);
			std::cout << "count added for movie " << name << std::endl;
			return 1;
		}
	}

	std::cout << "couldn't find movie " << name << std::endl;

	return 0;
}

moviesList::~moviesList() {
	delete movies;
}

