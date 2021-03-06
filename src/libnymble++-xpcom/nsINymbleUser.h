/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM nsINymbleUser.idl
 */

#ifndef __gen_nsINymbleUser_h__
#define __gen_nsINymbleUser_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsINymbleUser */
#define NS_INYMBLEUSER_IID_STR "9af36a2f-9b04-4936-acfc-7bffa77bc297"

#define NS_INYMBLEUSER_IID \
  {0x9af36a2f, 0x9b04, 0x4936, \
    { 0xac, 0xfc, 0x7b, 0xff, 0xa7, 0x7b, 0xc2, 0x97 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsINymbleUser : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INYMBLEUSER_IID)

  /* void setTimePeriod (in PRUint32 time_period); */
  NS_SCRIPTABLE NS_IMETHOD SetTimePeriod(PRUint32 time_period) = 0;

  /* void setLinkWindow (in PRUint32 link_window); */
  NS_SCRIPTABLE NS_IMETHOD SetLinkWindow(PRUint32 link_window) = 0;

  /* void setPseudonym (in string marshalled_pseudonym); */
  NS_SCRIPTABLE NS_IMETHOD SetPseudonym(const char *marshalled_pseudonym) = 0;

  /* string getPseudonym (); */
  NS_SCRIPTABLE NS_IMETHOD GetPseudonym(char **_retval) = 0;

  /* void readVerifyKey (in string verify_key_path); */
  NS_SCRIPTABLE NS_IMETHOD ReadVerifyKey(const char *verify_key_path) = 0;

  /* string addBlacklist (in string marshalled_blacklist); */
  NS_SCRIPTABLE NS_IMETHOD AddBlacklist(const char *marshalled_blacklist, char **_retval) = 0;

  /* boolean addCredential (in string marshalled_credential); */
  NS_SCRIPTABLE NS_IMETHOD AddCredential(const char *marshalled_credential, PRBool *_retval) = 0;

  /* string getTicket (in string serverId); */
  NS_SCRIPTABLE NS_IMETHOD GetTicket(const char *serverId, char **_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINymbleUser, NS_INYMBLEUSER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINYMBLEUSER \
  NS_SCRIPTABLE NS_IMETHOD SetTimePeriod(PRUint32 time_period); \
  NS_SCRIPTABLE NS_IMETHOD SetLinkWindow(PRUint32 link_window); \
  NS_SCRIPTABLE NS_IMETHOD SetPseudonym(const char *marshalled_pseudonym); \
  NS_SCRIPTABLE NS_IMETHOD GetPseudonym(char **_retval); \
  NS_SCRIPTABLE NS_IMETHOD ReadVerifyKey(const char *verify_key_path); \
  NS_SCRIPTABLE NS_IMETHOD AddBlacklist(const char *marshalled_blacklist, char **_retval); \
  NS_SCRIPTABLE NS_IMETHOD AddCredential(const char *marshalled_credential, PRBool *_retval); \
  NS_SCRIPTABLE NS_IMETHOD GetTicket(const char *serverId, char **_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINYMBLEUSER(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetTimePeriod(PRUint32 time_period) { return _to SetTimePeriod(time_period); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkWindow(PRUint32 link_window) { return _to SetLinkWindow(link_window); } \
  NS_SCRIPTABLE NS_IMETHOD SetPseudonym(const char *marshalled_pseudonym) { return _to SetPseudonym(marshalled_pseudonym); } \
  NS_SCRIPTABLE NS_IMETHOD GetPseudonym(char **_retval) { return _to GetPseudonym(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadVerifyKey(const char *verify_key_path) { return _to ReadVerifyKey(verify_key_path); } \
  NS_SCRIPTABLE NS_IMETHOD AddBlacklist(const char *marshalled_blacklist, char **_retval) { return _to AddBlacklist(marshalled_blacklist, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddCredential(const char *marshalled_credential, PRBool *_retval) { return _to AddCredential(marshalled_credential, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTicket(const char *serverId, char **_retval) { return _to GetTicket(serverId, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINYMBLEUSER(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetTimePeriod(PRUint32 time_period) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTimePeriod(time_period); } \
  NS_SCRIPTABLE NS_IMETHOD SetLinkWindow(PRUint32 link_window) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLinkWindow(link_window); } \
  NS_SCRIPTABLE NS_IMETHOD SetPseudonym(const char *marshalled_pseudonym) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPseudonym(marshalled_pseudonym); } \
  NS_SCRIPTABLE NS_IMETHOD GetPseudonym(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPseudonym(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD ReadVerifyKey(const char *verify_key_path) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadVerifyKey(verify_key_path); } \
  NS_SCRIPTABLE NS_IMETHOD AddBlacklist(const char *marshalled_blacklist, char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddBlacklist(marshalled_blacklist, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddCredential(const char *marshalled_credential, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddCredential(marshalled_credential, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTicket(const char *serverId, char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTicket(serverId, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNymbleUser : public nsINymbleUser
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINYMBLEUSER

  nsNymbleUser();

private:
  ~nsNymbleUser();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNymbleUser, nsINymbleUser)

nsNymbleUser::nsNymbleUser()
{
  /* member initializers and constructor code */
}

nsNymbleUser::~nsNymbleUser()
{
  /* destructor code */
}

/* void setTimePeriod (in PRUint32 time_period); */
NS_IMETHODIMP nsNymbleUser::SetTimePeriod(PRUint32 time_period)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setLinkWindow (in PRUint32 link_window); */
NS_IMETHODIMP nsNymbleUser::SetLinkWindow(PRUint32 link_window)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setPseudonym (in string marshalled_pseudonym); */
NS_IMETHODIMP nsNymbleUser::SetPseudonym(const char *marshalled_pseudonym)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string getPseudonym (); */
NS_IMETHODIMP nsNymbleUser::GetPseudonym(char **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void readVerifyKey (in string verify_key_path); */
NS_IMETHODIMP nsNymbleUser::ReadVerifyKey(const char *verify_key_path)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string addBlacklist (in string marshalled_blacklist); */
NS_IMETHODIMP nsNymbleUser::AddBlacklist(const char *marshalled_blacklist, char **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean addCredential (in string marshalled_credential); */
NS_IMETHODIMP nsNymbleUser::AddCredential(const char *marshalled_credential, PRBool *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string getTicket (in string serverId); */
NS_IMETHODIMP nsNymbleUser::GetTicket(const char *serverId, char **_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsINymbleUser_h__ */
