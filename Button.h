//
// Copyright 1999-2002 Jeff Bush
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef __BUTTON_H
#define __BUTTON_H

#include "ServerWindow.h"

class Button : public ServerWindow {
public:
	Button(const Rect &frame);
	virtual void paint(GraphicsContext &context);
	virtual void handleMouseButton(int x, int y, int buttons);
	virtual void handleMouseMoved(int x, int y);
	void setCallback(void (*callback)(void *data), void *data);

private:
	bool fDisplayPressed;
	bool fMouseButtonDown;
	void (*fCallback)(void *data);
	void *fCallbackData;
};

#endif
