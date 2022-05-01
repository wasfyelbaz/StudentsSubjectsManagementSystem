// including the libraries and classes needed
#pragma once
#include <string>
#include <vector>
#include "../Course/Course.h"

// forward decleration for DatabaseHandler class and GLOBAL_DATA as it's including this class too.
class DatabaseHandler;
class GLOBAL_DATA;

class Student
{
private:
	// attributes
	GLOBAL_DATA* gd;
	std::string id;
	std::string name;
	std::string password;
	std::string academic_year;
public:
	std::vector<Course> finished_courses;
	std::vector<Course> courses_in_progress;
public:
	// methods
	// getters
	std::string get_id();
	std::string get_name();
	std::string get_password();
	std::string get_academic_year();
	std::vector<Course> get_finished_courses();
	std::vector<Course> get_courses_in_progress();
	// setters
	void set_id(std::string);
	void set_name(std::string);
	void set_password(std::string);
	void set_academic_year(std::string);
	// functionalities
	//void edit_student(Student);
	bool enroll_course(Course);
	bool add_finished_course(Course);
	//void view_courses_Available(Data& data);
	void view_all_Courses();
	bool login(std::string, std::string);
};
