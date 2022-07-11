export CLASSPATH=${PWD}/PetraCipherAPI.jar:.
javac -cp ${CLASSPATH} PetraApiJavaDemo.java
java PetraApiJavaDemo
[ -f "PetraApiJavaDemo.class" ] && rm -f PetraApiJavaDemo.class
