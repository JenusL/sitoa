/************************************************************************************************************************************
Copyright 2017 Autodesk, Inc. All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. 
You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, 
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
See the License for the specific language governing permissions and limitations under the License.
************************************************************************************************************************************/

#pragma once

#include <ai_nodes.h>

#include <xsi_camera.h>
#include <xsi_pass.h>
#include <xsi_shader.h>
#include <xsi_status.h>

using namespace XSI;

// Update imagers in Arnold
CStatus UpdateImagers(double in_frame);
Shader UpdateCameraImagers(AtNode* in_cameraNode, const Camera &in_xsiCamera, double in_frame);
Shader UpdatePassImagers(const Pass &in_pass, double in_frame);
Shader UpdateImager(const Shader &in_imagerDummyShader, double in_frame);