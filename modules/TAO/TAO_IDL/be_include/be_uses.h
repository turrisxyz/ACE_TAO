// -*- C++ -*-
// $Id$

#ifndef BE_USES_H
#define BE_USES_H

#include "ast_uses.h"

#include "be_decl.h"

class be_interface;
class be_visitor;

class be_uses : public virtual AST_Uses,
                public virtual be_decl
{
public:
  be_uses (UTL_ScopedName *n,
           be_interface *uses_type,
           bool is_multiple);
            
  virtual ~be_uses (void);
  
  // Narrowing.
  DEF_NARROW_FROM_DECL(be_uses);

  // Visiting.
  virtual int accept (be_visitor *visitor);
  
  // Cleanup.
  virtual void destroy (void);
};

#endif // BE_USES_H

