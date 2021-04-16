void example2() {
    boost::variant<int, std::string> variable(0);

    //When using the method below, an exception may be thrown
    // boost::bad_get, if the actual value in variable is not int
    int s1 = boost::get<int>(variable);

    // If the actual value in the variable is not an int, 
    // NULL will be returned
    int* s2 = boost::get<int>(&variable);
}