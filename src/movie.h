/*
 * movie.h
 *
 *  Created on: 13 abr 2020
 *      Author: tropi
 */

#ifndef MOVIE_H_
#define MOVIE_H_
#include <string>
class movie {
private:
	std::string _name;
	std::string _rating;
	int _watched;
public:
	movie(std::string name, std::string rating, int watched);
	movie(const movie &copy);
	movie(movie &&other);
	std::string get_name() const;
	void set_watched(int w);
	void display() const;
	virtual ~movie();
};

#endif /* MOVIE_H_ */
