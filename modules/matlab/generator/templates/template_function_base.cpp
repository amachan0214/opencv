/*
 * file:   {{fun.name}}.cpp
 * author: A trusty code generator
 * date:   {{time.strftime("%a, %d %b %Y %H:%M:%S", time.localtime())}}
 * 
 * This file was autogenerated, do not modify.
 * See LICENCE for full modification and redistribution details.
 * Copyright {{time.strftime("%Y", time.localtime())}} The OpenCV Foundation
 */
#include "mex.h"
#include "bridge.hpp"
#include <vector>
{% block includes %}
{% endblock %}

/* 
 * {{ fun.name }}
 * Gateway routine
 *   nlhs - number of return arguments
 *   plhs - pointers to return arguments
 *   nrhs - number of input arguments
 *   prhs - pointers to input arguments
 */
void mexFunction(int nlhs, mxArray* plhs[],
                 int nrhs, const mxArray* prhs[]) {

  {% block argcheck %}
  {% endblock %}

  {% block prebridge %}
  {% endblock %}

  // parse the inputs and outputs

  {% block postbridge %}
  {% endblock %}

  // call the opencv function
  // [out =] namespace.fun(src1, ..., srcn, dst1, ..., dstn, opt1, ..., optn);
  {{fun.name}}();
  {% block fcall %}
  {% endblock %}

  {% block postfun %}
  {% endblock %}

  {% block cleanup %}
  {% endblock %}
}
