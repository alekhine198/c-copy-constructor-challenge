/*
 * moviesList.h
 *
 *  Created on: 13 abr 2020
 *      Author: tropi
 */

#ifndef MOVIESLIST_H_
#define MOVIESLIST_H_

#include <vector>
#include "movie.h"
class moviesList {

private:
	std::vector<movie> *movies;
public:
	moviesList();
	bool add(std::string name, std::string rating, int watched);
	bool incrementWatch(std::string name, int w);
	void display() const;
	virtual ~moviesList();
};

#endif /* MOVIESLIST_H_ */
