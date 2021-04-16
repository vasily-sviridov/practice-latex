void example1() {
    // The default constructor creates an instance of boost::blank.
    boost::variant<boost::blank, int, const char*, std::string> var;
    
    // The which() method returns the index of the type currently
    // contained in the variant.
    assert(var.which() == 0); // boost::blank

    var = "Hello, dear reader";
    assert(var.which() != 0);
}