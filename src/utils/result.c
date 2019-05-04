/*  This file is part of the Avalon programming language
 * 
 *  Copyright (c) 2018-2019 Ntwali Bashige Toussaint
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include <utils/result.h>

struct Result createResult(enum ResultType type, void * data) {
    struct Result result;
    result.type = type;
    result.data = data;
    return result;
}

struct Error createError(enum ErrorType type, char * file, int line, int column, int lexeme_length, char * message) {
    struct Error error;
    error.type = type;
    error.file = file;
    error.line = line;
    error.column = column;
    error.lexeme_length = lexeme_length;
    error.message = message;
    return error;
}
