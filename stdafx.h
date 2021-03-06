// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once


#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <map>
#include <Windows.h>
#include <wchar.h>
#include <cassert>
#include <iomanip>
#include <set>
#include <iterator>
#include <algorithm>
#include <list>
#include <strstream>
#include <functional>
#include <memory>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::map;

// OpenGL Include
// GLEW
#define GLEW_STATIC
#include <gl\glew.h>

// GLFW
#include <GLFW\glfw3.h>
#define GLFW_EXPOSE_NATIVE_WIN32
#include <GLFW\glfw3native.h>
// TinyXML 2
#include <tinyxml2.h>


// libary
#pragma comment(lib, "glew32s.lib")
#pragma comment(lib, "glfw3.lib")
#pragma comment(lib, "FreeImage.lib")
#pragma comment(lib, "tinyxml2.lib")
#pragma comment(lib, "opengl32.lib")


// Math
#include <glm\mat4x4.hpp>
#include "glm\vec3.hpp"
#include "glm\vec4.hpp"
#include "glm\vec2.hpp"

#include "glm\gtc\quaternion.hpp"
#include "glm\gtc\matrix_transform.hpp"
#include "glm\gtc\type_ptr.hpp"
#include "glm\gtc\constants.hpp"

#include "glm\gtx\quaternion.hpp"
#include "glm\gtx\compatibility.hpp"
#include <glm\gtx\euler_angles.hpp>
#include "glm\geometric.hpp"
#include "glm\detail\func_matrix.hpp"

using glm::vec2;
using glm::vec3;
using glm::vec4;
using glm::mat4;
using glm::quat;

#include "Windows.h"
#include "Shader.h"
#include "Texture.h"
#include "OpenGLRenderer.h"
#include "FrameBuffer.h"
#include "imguiMesh.h"
#include "Image.h"
#include "SystemUI.h"
#include "Tool.h"
#include "Action/Action.h"
#include "Application.h"