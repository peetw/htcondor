//******************************************************************************
//
// scanner.h
//
//******************************************************************************

#ifndef _SCANNER_H_
#define _SCANNER_H_

#define MAXVARNAME 256

// Lexeme abstract dataype:

class Token
{
	public:

		Token();
		~Token();
		union
		{
			int		intVal;
			char*	strVal;
			float	floatVal;
		};
		LexemeType	type; 
		int			length;	// error position in the string for the parser

		friend	void	Scanner(char*&, Token&);

	private:

		int		isString;
};

#endif
