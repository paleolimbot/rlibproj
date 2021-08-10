#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>
#include "libproj.h"

/* generated by data-raw/make_callentries.R */
extern SEXP proj_c_pj_default_ctx();
extern SEXP proj_c_context_clone(SEXP context_xptr);
extern SEXP proj_c_context_set_log_level(SEXP context_xptr, SEXP log_level_sexp);
extern SEXP proj_c_context_is_network_enabled(SEXP context_xptr);
extern SEXP proj_c_context_get_url_endpoint(SEXP context_xptr);
extern SEXP proj_c_context_get_user_writable_directory(SEXP context_xptr);
extern SEXP proj_c_context_get_use_proj4_init_rules(SEXP context_xptr);
extern SEXP proj_c_context_get_database_path(SEXP context_xptr);
extern SEXP proj_c_type_name(SEXP type_sexp);
extern SEXP proj_c_comp_name(SEXP comp_sexp);
extern SEXP proj_c_wkt_type(SEXP wkt_type_sexp);
extern SEXP proj_c_proj_string_type(SEXP code_sexp);
extern SEXP proj_c_direction_name(SEXP code_sexp);
extern SEXP proj_c_init();
extern SEXP proj_c_version_build();
extern SEXP proj_c_trans(SEXP pj_xptr, SEXP use_z_sexp, SEXP use_m_sexp, SEXP direction_sexp);
extern SEXP proj_c_trans_inverse(SEXP trans_xptr);
extern SEXP proj_c_create(SEXP ctx_xptr, SEXP definition_sexp);
extern SEXP proj_c_get_context(SEXP pj_xptr);
extern SEXP proj_c_create_crs_to_crs(SEXP ctx_xptr, SEXP source_crs_xptr, SEXP target_crs_xptr, SEXP area_sexp, SEXP options_sexp);
extern SEXP proj_c_create_from_wkt(SEXP ctx_xptr, SEXP wkt_sexp, SEXP options_sexp);
extern SEXP proj_c_get_source_crs(SEXP pj_xptr, SEXP ctx_xptr);
extern SEXP proj_c_normalize_for_visualization(SEXP pj_xptr, SEXP ctx_xptr);
extern SEXP proj_c_get_target_crs(SEXP pj_xptr, SEXP ctx_xptr);
extern SEXP proj_c_get_non_deprecated(SEXP pj_xptr, SEXP ctx_xptr);
extern SEXP proj_c_identify(SEXP pj_xptr, SEXP auth_name_sexp, SEXP ctx_xptr);
extern SEXP proj_c_proj_info(SEXP pj_xptr);
extern SEXP proj_c_get_type(SEXP pj_xptr);
extern SEXP proj_c_is_deprecated(SEXP pj_xptr);
extern SEXP proj_c_is_crs(SEXP pj_xptr);
extern SEXP proj_c_is_equivalent_to(SEXP pj_xptr, SEXP other_xptr, SEXP criterion_sexp, SEXP ctx_xptr);
extern SEXP proj_c_get_remarks(SEXP pj_xptr);
extern SEXP proj_c_get_scope(SEXP pj_xptr);
extern SEXP proj_c_get_area_of_use(SEXP pj_xptr);
extern SEXP proj_c_as_wkt(SEXP pj_xptr, SEXP wkt_type_sexp, SEXP options_sexp, SEXP ctx_xptr);
extern SEXP proj_c_as_proj_string(SEXP pj_xptr, SEXP proj_string_type_sexp, SEXP options_sexp, SEXP ctx_xptr);
extern SEXP proj_c_as_projjson(SEXP pj_xptr, SEXP options_sexp, SEXP ctx_xptr);
extern SEXP proj_c_trans_matrix(SEXP pj_xptr, SEXP x_sexp, SEXP direction_sexp, SEXP verbose_sexp);
extern SEXP proj_c_xptr_addr(SEXP xptr);
static const R_CallMethodDef CallEntries[] = {
    {"proj_c_pj_default_ctx", (DL_FUNC) &proj_c_pj_default_ctx, 0},
  {"proj_c_context_clone", (DL_FUNC) &proj_c_context_clone, 1},
  {"proj_c_context_set_log_level", (DL_FUNC) &proj_c_context_set_log_level, 2},
  {"proj_c_context_is_network_enabled", (DL_FUNC) &proj_c_context_is_network_enabled, 1},
  {"proj_c_context_get_url_endpoint", (DL_FUNC) &proj_c_context_get_url_endpoint, 1},
  {"proj_c_context_get_user_writable_directory", (DL_FUNC) &proj_c_context_get_user_writable_directory, 1},
  {"proj_c_context_get_use_proj4_init_rules", (DL_FUNC) &proj_c_context_get_use_proj4_init_rules, 1},
  {"proj_c_context_get_database_path", (DL_FUNC) &proj_c_context_get_database_path, 1},
  {"proj_c_type_name", (DL_FUNC) &proj_c_type_name, 1},
  {"proj_c_comp_name", (DL_FUNC) &proj_c_comp_name, 1},
  {"proj_c_wkt_type", (DL_FUNC) &proj_c_wkt_type, 1},
  {"proj_c_proj_string_type", (DL_FUNC) &proj_c_proj_string_type, 1},
  {"proj_c_direction_name", (DL_FUNC) &proj_c_direction_name, 1},
  {"proj_c_init", (DL_FUNC) &proj_c_init, 0},
  {"proj_c_version_build", (DL_FUNC) &proj_c_version_build, 0},
  {"proj_c_trans", (DL_FUNC) &proj_c_trans, 4},
  {"proj_c_trans_inverse", (DL_FUNC) &proj_c_trans_inverse, 1},
  {"proj_c_create", (DL_FUNC) &proj_c_create, 2},
  {"proj_c_get_context", (DL_FUNC) &proj_c_get_context, 1},
  {"proj_c_create_crs_to_crs", (DL_FUNC) &proj_c_create_crs_to_crs, 5},
  {"proj_c_create_from_wkt", (DL_FUNC) &proj_c_create_from_wkt, 3},
  {"proj_c_get_source_crs", (DL_FUNC) &proj_c_get_source_crs, 2},
  {"proj_c_normalize_for_visualization", (DL_FUNC) &proj_c_normalize_for_visualization, 2},
  {"proj_c_get_target_crs", (DL_FUNC) &proj_c_get_target_crs, 2},
  {"proj_c_get_non_deprecated", (DL_FUNC) &proj_c_get_non_deprecated, 2},
  {"proj_c_identify", (DL_FUNC) &proj_c_identify, 3},
  {"proj_c_proj_info", (DL_FUNC) &proj_c_proj_info, 1},
  {"proj_c_get_type", (DL_FUNC) &proj_c_get_type, 1},
  {"proj_c_is_deprecated", (DL_FUNC) &proj_c_is_deprecated, 1},
  {"proj_c_is_crs", (DL_FUNC) &proj_c_is_crs, 1},
  {"proj_c_is_equivalent_to", (DL_FUNC) &proj_c_is_equivalent_to, 4},
  {"proj_c_get_remarks", (DL_FUNC) &proj_c_get_remarks, 1},
  {"proj_c_get_scope", (DL_FUNC) &proj_c_get_scope, 1},
  {"proj_c_get_area_of_use", (DL_FUNC) &proj_c_get_area_of_use, 1},
  {"proj_c_as_wkt", (DL_FUNC) &proj_c_as_wkt, 4},
  {"proj_c_as_proj_string", (DL_FUNC) &proj_c_as_proj_string, 4},
  {"proj_c_as_projjson", (DL_FUNC) &proj_c_as_projjson, 3},
  {"proj_c_trans_matrix", (DL_FUNC) &proj_c_trans_matrix, 4},
  {"proj_c_xptr_addr", (DL_FUNC) &proj_c_xptr_addr, 1},
  {NULL, NULL, 0}
};
/* end generated by data-raw/make_callentries.R */

void R_init_rlibproj(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}



// # nocov start
void R_unload_proj(DllInfo *dll) {

}
// # nocov end

SEXP proj_c_init() {
  // load functions into the (currently NULL) function pointers in libproj-impl.c
  libproj_init_api();
  return R_NilValue;
}


#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)
#define LIBPROJ_PROJ_VERSION STR(PROJ_VERSION_MAJOR) "." STR(PROJ_VERSION_MINOR) "." STR(PROJ_VERSION_PATCH)

SEXP proj_c_version_build() {
  return Rf_mkString(LIBPROJ_PROJ_VERSION);
}
