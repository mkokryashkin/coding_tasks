//
// Created by maxim on 06.09.19.
//
struct StringBoundaries {
    char *start;
    char *end;
};

int writeFile (char *filepath, StringBoundaries *index, int n_lines);

int getFileSize (char *filepath);

int getNumberOfLines (char *file_data);

void getStringsBoundaries (char *file_data, int file_size, StringBoundaries *index);

int compareStrings (const void *first_string, const void *second_string);

int readFile (char *filepath, int file_size, char *file_data);

void sortStrings (StringBoundaries *index, int n_lines);

void sortStringsBackwards (StringBoundaries *index, int n_lines);

