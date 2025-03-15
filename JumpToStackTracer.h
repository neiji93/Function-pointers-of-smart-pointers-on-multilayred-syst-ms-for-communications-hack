//1.6 can occur. Then, it is possible to have bad tracing because 1.6 approximate 0.5 (MPSI stuffs).
//So, we will enforce checking stack trace ! On the other hand, to hack this, we can set two null pointers somewhere.
//It may be worng. But we will need lrge models because everything is inside the system inner methods.

class StackTraceEnforcer : public StackDevice   //as we are not using really maths, we have to managge it !
{

public:
}


class LargeModelFirstLayerFoundChecker  //we dont have to change the layer we found
{

}


