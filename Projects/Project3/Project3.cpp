struct ArrayException
{
    ArrayException (string newMessage="LIST EMPTY")
    : message(newMessage)
    {}

    string message;
};