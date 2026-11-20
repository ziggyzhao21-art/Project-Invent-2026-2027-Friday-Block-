void setup() {
  // put your setup code here, to run once:
  //ADD INITIALIZATIOM
  v_init();//initializing LVGL
  lv_tick_set_cb(my_get_millis);//giving it a sense of time(?) for animations ect
  lv_display_t * display = lv_display_create(320, 240)//creating the display with the dementions of the CYD board

  static uint8_t buf[320 * 240 / 10 * 2];
  v_display_set_buffers(display, buf, NULL, sizeof(buf), LV_DISPLAY_RENDER_MODE_PARTIAL);//creating buffers- arrays that hold the screens contrnt

  lv_display_set_flush_cb(display, my_flush_cb);//creating the driver- the function that sends the buffer arrays to the display
  lv_obj_t * screen = lv_screen_active();//creating the screen
  lv_obj_set_flex_flow(screen, LV_FLEX_FLOW_COLUMN);//puts all children ofthw parent punction in a vettical setup
  lv_obj_set_style_flex_cross_place(screen, LV_FLEX_ALIGN_CENTER, 0);
  lv_obj_set_style_flex_track_place(screen, LV_FLEX_ALIGN_CENTER, 0);
  lv_obj_set_style_pad_row(screen, 12, 0);// spaces out the child widgets
 
 
  lv_obj_t * container = lv_obj_create(screen);//creating a column for the buttons to go in
  lv_obj_set_size(container, 220, 140);//sizing the column
  lv_obj_set_flex_flow(container, LV_FLEX_FLOW_COLUMN);//making it so that the buttons fit in the column
  lv_obj_set_style_pad_row(container, 8, 0);//spaces out the wigets in the containor
  
  //making the buttons
  lv_obj_t * button_1 = lv_button_create(container);
  lv_obj_set_width(button_1, lv_pct(100));
  lv_obj_t * label_1 = lv_label_create(button_1);
  lv_obj_set_align(label_1, LV_ALIGN_CENTER);
  lv_label_set_text(label_1, "name 1");

  v_obj_t * button_2 = lv_button_create(container);
  lv_obj_set_width(button_2, lv_pct(100));
  lv_obj_t * label_2 = lv_label_create(button_2);
  lv_obj_set_align(label_2, LV_ALIGN_CENTER);
  lv_label_set_text(label_2, "name 2");

  v_obj_t * button_3 = lv_button_create(container);
  lv_obj_set_width(button_3, lv_pct(100));
  lv_obj_t * label_3 = lv_label_create(button_3);
  lv_obj_set_align(label_3, LV_ALIGN_CENTER);
  lv_label_set_text(label_3, "name 3");

  v_obj_t * button_4 = lv_button_create(container);
  lv_obj_set_width(button_4, lv_pct(100));
  lv_obj_t * label_4 = lv_label_create(button_1);
  lv_obj_set_align(label_4, LV_ALIGN_CENTER);
  lv_label_set_text(label_4, "name 4");

  v_obj_t * button_5 = lv_button_create(container);
  lv_obj_set_width(button_5, lv_pct(100));
  lv_obj_t * label_5 = lv_label_create(button_5);
  lv_obj_set_align(label_5, LV_ALIGN_CENTER);
  lv_label_set_text(label_5, "name 5");

  v_obj_t * button_6 = lv_button_create(container);
  lv_obj_set_width(button_6, lv_pct(100));
  lv_obj_t * label_6 = lv_label_create(button_6);
  lv_obj_set_align(label_1, LV_ALIGN_CENTER);
  lv_label_set_text(label_1, "name 6");
  


  



}

void loop() {
  // put your main code here, to run repeatedly:

}
