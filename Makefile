CXX = g++
CXXFLAGS = -Wall -MMD
EXEC = arithmetic-evaluator
OBJECTS = arithmetic-evaluator.o Expression.o BinaryExpression.o LoneExpression.o UnaryExpression.o ExpressionStack.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}

.PHONY: clean
