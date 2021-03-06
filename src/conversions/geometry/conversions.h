{
#if RUBY_CAN_USE_AUTOLOAD
    rb_funcall(rb_mKernel, rb_intern("autoload"), 2, rb_str_new2("Point"),
               rb_str_new2("plruby/plruby_geometry"));
    rb_funcall(rb_mKernel, rb_intern("autoload"), 2, rb_str_new2("Segment"),
               rb_str_new2("plruby/plruby_geometry"));
    rb_funcall(rb_mKernel, rb_intern("autoload"), 2, rb_str_new2("Box"),
               rb_str_new2("plruby/plruby_geometry"));
    rb_funcall(rb_mKernel, rb_intern("autoload"), 2, rb_str_new2("Path"),
               rb_str_new2("plruby/plruby_geometry"));
    rb_funcall(rb_mKernel, rb_intern("autoload"), 2, rb_str_new2("Polygon"),
               rb_str_new2("plruby/plruby_geometry"));
    rb_funcall(rb_mKernel, rb_intern("autoload"), 2, rb_str_new2("Circle"),
               rb_str_new2("plruby/plruby_geometry"));
    rb_hash_aset(plruby_conversions, INT2NUM(POINTOID), INT2NUM(rb_intern("Point")));
    rb_hash_aset(plruby_conversions, INT2NUM(LSEGOID), INT2NUM(rb_intern("Segment")));
    rb_hash_aset(plruby_conversions, INT2NUM(BOXOID), INT2NUM(rb_intern("Box")));
    rb_hash_aset(plruby_conversions, INT2NUM(PATHOID), INT2NUM(rb_intern("Path")));
    rb_hash_aset(plruby_conversions, INT2NUM(POLYGONOID), INT2NUM(rb_intern("Polygon")));
    rb_hash_aset(plruby_conversions, INT2NUM(CIRCLEOID), INT2NUM(rb_intern("Circle")));
#else
    VALUE tmp;

    tmp = plruby_define_void_class("Point", "plruby/plruby_geometry");
    rb_hash_aset(plruby_classes, INT2NUM(POINTOID), tmp);
    tmp = plruby_define_void_class("Segment", "plruby/plruby_geometry");
    rb_hash_aset(plruby_classes, INT2NUM(LSEGOID), tmp);
    tmp = plruby_define_void_class("Box", "plruby/plruby_geometry");
    rb_hash_aset(plruby_classes, INT2NUM(BOXOID), tmp);
    tmp = plruby_define_void_class("Path", "plruby/plruby_geometry");
    rb_hash_aset(plruby_classes, INT2NUM(PATHOID), tmp);
    tmp = plruby_define_void_class("Polygon", "plruby/plruby_geometry");
    rb_hash_aset(plruby_classes, INT2NUM(POLYGONOID), tmp);
    tmp = plruby_define_void_class("Circle", "plruby/plruby_geometry");
    rb_hash_aset(plruby_classes, INT2NUM(CIRCLEOID), tmp);
#endif
}
