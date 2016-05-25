/*
 * IOManager.h
 *
 *  Created on: 23 May 2016
 *      Author: jan
 */

#ifndef IOMANAGER_H_
#define IOMANAGER_H_

#include <vector>
#include <string>

class IOManager {
public:
	static bool readFileToBuffer(std::string filePath, std::vector<unsigned char>& buffer);
};

#endif /* IOMANAGER_H_ */
