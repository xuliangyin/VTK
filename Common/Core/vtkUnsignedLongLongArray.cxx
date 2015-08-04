/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkUnsignedLongLongArray.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
// Instantiate superclass first to give the template a DLL interface.
#include "vtkAoSDataArrayTemplate.h"
VTK_AOS_DATA_ARRAY_TEMPLATE_INSTANTIATE(unsigned long long);
#include "vtkArrayIteratorTemplate.txx"
VTK_ARRAY_ITERATOR_TEMPLATE_INSTANTIATE(unsigned long long);


#define vtkUnsignedLongLongArray_cxx
#include "vtkUnsignedLongLongArray.h"

#include "vtkObjectFactory.h"

//----------------------------------------------------------------------------
vtkStandardNewMacro(vtkUnsignedLongLongArray);

//----------------------------------------------------------------------------
vtkUnsignedLongLongArray::vtkUnsignedLongLongArray()
{
}

//----------------------------------------------------------------------------
vtkUnsignedLongLongArray::~vtkUnsignedLongLongArray()
{
}

//----------------------------------------------------------------------------
void vtkUnsignedLongLongArray::PrintSelf(ostream& os, vtkIndent indent)
{
  this->RealSuperclass::PrintSelf(os,indent);
}
