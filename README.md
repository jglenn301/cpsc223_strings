Not a terribly interesting example.  Remove the `'\0'` from the initialization of `end` to see what comes of the undefined behavior you get
when the string functions go off the ends of the arrays.
