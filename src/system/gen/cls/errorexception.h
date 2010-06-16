/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_errorexception_h__
#define __GENERATED_cls_errorexception_h__

#include <cls/exception.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 94 */
class c_errorexception : public c_exception {
  BEGIN_CLASS_MAP(errorexception)
    PARENT_CLASS(exception)
  END_CLASS_MAP(errorexception)
  DECLARE_CLASS_COMMON(errorexception, ErrorException, exception)
  DECLARE_INVOKE_EX(errorexception, exception)

  // DECLARE_STATIC_PROP_OPS
  public:
  static Variant os_getInit(const char *s, int64 hash);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_errorexception 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_errorexception 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_errorexception 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  virtual bool o_exists(CStrRef s, int64 hash,
                        const char *context = NULL) const;
  bool o_existsPrivate(CStrRef s, int64 hash) const;
  virtual void o_get(Array &props) const;
  virtual Variant o_get(CStrRef s, int64 hash, bool error = true,
                        const char *context = NULL);
  Variant o_getPrivate(CStrRef s, int64 hash, bool error = true);
  virtual Variant o_set(CStrRef s, int64 hash, CVarRef v,
                        bool forInit = false,
                        const char *context = NULL);
  Variant o_setPrivate(CStrRef s, int64 hash, CVarRef v, bool forInit);
  virtual Variant &o_lval(CStrRef s, int64 hash,
                          const char *context = NULL);
  Variant &o_lvalPrivate(CStrRef s, int64 hash);

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  virtual bool o_existsPublic(CStrRef s, int64 hash) const;
  virtual Variant o_getPublic(CStrRef s, int64 hash,
                              bool error = true);
  virtual Variant o_setPublic(CStrRef s, int64 hash,
                              CVarRef v, bool forInit);
  virtual Variant &o_lvalPublic(CStrRef s, int64 hash);

  // DECLARE_COMMON_INVOKE
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_errorexception 1
  virtual Variant o_invoke(const char *s, CArrRef ps, int64 h,
                           bool f = true);
  virtual Variant o_invoke_few_args(const char *s, int64 h,
                                    int count,
                                    INVOKE_FEW_ARGS_DECL_ARGS);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: Variant m_severity;
  public: void t___construct(Variant v_message = "", Variant v_code = 0LL, Variant v_severity = 0LL, Variant v_filename = null, Variant v_lineno = null);
  public: c_errorexception *create(Variant v_message = "", Variant v_code = 0LL, Variant v_severity = 0LL, Variant v_filename = null, Variant v_lineno = null);
  public: ObjectData *dynCreate(CArrRef params, bool init = true);
  public: void dynConstruct(CArrRef params);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: Variant t_getseverity();
};
extern struct ObjectStaticCallbacks cw_errorexception;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_errorexception_h__
