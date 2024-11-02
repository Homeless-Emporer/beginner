char sentence[size] = "";

puts("Enter a sentence: ");
fgets(sentence, size, stdin);

puts("Your sentence written backwards is : ");
reverse(sentence);


void reverse(const char* const sPtr)
{
    if(sPtr[0] !=)
    {
        reverse(&sPtr[1]);
        putchar(sPtr[0]);
    } else {
        return;
}