/***************************************************************************
 *   Copyright (c) 2022 Werner Mayer <wmayer[at]users.sourceforge.net>     *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/

#include "PreCompiled.h"
#ifndef _PreComp_
# include <Interface_Static.hxx>
#endif

#include "Interface.h"


using namespace Part;

void Interface::writeStepAssembly(Interface::Assembly mode)
{
    Interface_Static::SetIVal("write.step.assembly", static_cast<int>(mode));
}

Standard_CString Interface::writeStepScheme()
{
    return Interface_Static::CVal("write.step.schema");
}

bool Interface::writeStepScheme(Standard_CString scheme)
{
    return Interface_Static::SetCVal("write.step.schema", scheme);
}

bool Interface::writeStepUnit(Standard_CString unit)
{
    return Interface_Static::SetCVal("write.step.unit", unit);
}

Standard_CString Interface::writeStepUnit()
{
    return Interface_Static::CVal("write.step.unit");
}

Standard_CString Interface::writeIgesHeaderAuthor()
{
    return Interface_Static::CVal("write.iges.header.author");
}

bool Interface::writeIgesHeaderAuthor(Standard_CString name)
{
    return Interface_Static::SetCVal("write.iges.header.author", name);
}

Standard_CString Interface::writeIgesHeaderCompany()
{
    return Interface_Static::CVal("write.iges.header.company");
}

bool Interface::writeIgesHeaderCompany(Standard_CString name)
{
    return Interface_Static::SetCVal("write.iges.header.company", name);
}

Standard_CString Interface::writeIgesHeaderProduct()
{
    return Interface_Static::CVal("write.iges.header.product");
}

bool Interface::writeIgesHeaderProduct(Standard_CString name)
{
    return Interface_Static::SetCVal("write.iges.header.product", name);
}

bool Interface::writeIgesUnit(Standard_CString unit)
{
    return Interface_Static::SetCVal("write.iges.unit", unit);
}

bool Interface::writeIgesUnit(Interface::Unit unit)
{
    switch (unit) {
    case Unit::Meter:
        return Interface_Static::SetCVal("write.iges.unit","M");
    case Unit::Inch:
        return Interface_Static::SetCVal("write.iges.unit","INCH");
    default:
        return Interface_Static::SetCVal("write.iges.unit","MM");
    }
}

Standard_CString Interface::writeIgesUnit()
{
    return Interface_Static::CVal("write.iges.unit");
}

int Interface::writeIgesBrepMode()
{
    return Interface_Static::IVal("write.iges.brep.mode");
}

bool Interface::writeIgesBrepMode(int mode)
{
    return Interface_Static::SetIVal("write.iges.brep.mode", mode);
}
