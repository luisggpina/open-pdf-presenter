/*
    This file is part of open-pdf-presenter.

    open-pdf-presenter is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    open-pdf-presenter is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with open-pdf-presenter.  If not, see <http://www.gnu.org/licenses/>.
*/
#include <QApplication>

#include "events/event.h"
#include "events/timer.h"
#include "views/view.h"
#include "views/controlbar.h"
#include "views/console.h"
#include "views/mainwindow.h"
#include "views/mainslide.h"
#include "controllers.h"
#include "presenter.h"

int main(int argc, char ** argv) {
	int ret = 0;

	QApplication app(argc, argv);

	OpenPdfPresenter * presenter = new OpenPdfPresenter(argc,argv);

	ret = presenter->start();

	delete presenter;

	return ret;
}
