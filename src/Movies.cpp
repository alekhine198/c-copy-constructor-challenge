//============================================================================
// Name        : Movies.cpp
// Author      : Angel Ale
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "movie.h"
#include "moviesList.h"
#include <string>
using namespace std;

void addMovie(moviesList &movie, string name, string rating, int watch){
	if(movie.add(name, rating, watch)){

	}else{
		cout <<name << " already in the list\n";
	}
}

int main() {
	moviesList movies;
	movies.display();

	addMovie(movies,"Big","PG-13",2);
	addMovie(movies,"Star Wars","PG",5);
	addMovie(movies,"Cindirella","PG",2);
	addMovie(movies,"Cindirella","PG",2);
	addMovie(movies,"Ice Age","PG",12);
	movies.display();
	movies.incrementWatch("Cindirella",34);
	movies.display();
	return 0;
}
